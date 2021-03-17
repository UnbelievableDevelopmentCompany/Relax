#pragma once
#include "Object.h"
#include "RelaxBool.h"

class RelaxFloat : public Object
{
public:
	RelaxFloat(float data);
	constexpr String GetDataType() override
	{
		return "Relax.Float"_ss;
	}
	float GetData();
	void SetData(float data);

	RelaxFloat* operator+(RelaxFloat* other);
	RelaxFloat* operator-(RelaxFloat* other);
	RelaxFloat* operator*(RelaxFloat* other);
	RelaxFloat* operator/(RelaxFloat* other);
	RelaxBool* operator==(RelaxFloat* other);

	static RelaxFloat* cast(class RelaxInt32* data);

	static void GenerateMetaInfo();
	static inline class Class* metaClass = nullptr;
private:
	float data;
};

