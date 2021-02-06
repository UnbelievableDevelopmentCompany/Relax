#include "Class.h"

Class::Class(const QString& name, const QList<Method>& methods)
	:name(name), methods(methods)
{
}

QString Class::GetName() const
{
	return name;
}

QList<Method> Class::GetMethods() const
{
	return methods;
}

Method* Class::GetMethod(const QString& name, const QString& dataType, const QList<Parameter>& parameters)
{
	auto methodIterator = std::find_if(methods.begin(), methods.end(), [&](Method& method) {
		bool nameIsEqual = name == method.GetName();
		if (!nameIsEqual)return false;

		bool dataTypeIsEqual = dataType == method.GetDataType();
		if (!dataTypeIsEqual)return false;

		bool parametersIsEqual = parameters == method.GetParameters();
		if (!parametersIsEqual)return false;

		
		return true;
	});
	if(methodIterator == methods.end())
		return nullptr;
	return &(*methodIterator);
}

Method* Class::GetMethod(const MethodSignature& signature)
{
	auto methodIterator = std::find_if(methods.begin(), methods.end(), [&](const Method& method) {
		return signature == dynamic_cast<const MethodSignature&>(signature);
	});
	if (methodIterator == methods.end())
		return nullptr;
	return &(*methodIterator);
}

void Class::SetName(const QString& name)
{
	this->name = name;
}

void Class::SetMethods(const QList<Method>& methods)
{
	this->methods = methods;
}

void Class::SetMethod(int index, const Method& method)
{
	methods[index] = method;
}

void Class::AddMethod(const Method& method)
{
	methods.push_back(method);
}

bool Class::operator==(const Class& other) const
{
	bool nameIsEqual = other.GetName() == name;
	bool methodsIsEqual = other.GetMethods() == methods;

	return nameIsEqual && methodsIsEqual;
}