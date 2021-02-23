#include "RelaxConsole.h"
#include "../StdClassList.h"

QString RelaxConsole::GetDataType()
{
    return "Relax.Console";
}

Object* RelaxConsole::Write(RelaxString* data)
{
	std::cout << data->GetData().toStdString();
	return nullptr;
}

Object* RelaxConsole::Write(RelaxInt32* data)
{
	std::cout << data->GetData();
	return nullptr;
}

Object* RelaxConsole::Write(RelaxFloat* data)
{
	std::cout << data->GetData();
	return nullptr;
}

Object* RelaxConsole::Write(RelaxBool* data)
{
	std::cout << (data->GetData() ? "true" : "false");
	return nullptr;
}

Object* RelaxConsole::Print(RelaxString* data)
{
	qout << data->GetData();
	return nullptr;
}

Object* RelaxConsole::Print(RelaxInt32* data)
{
	qout << QString::number(data->GetData());
	return nullptr;
}

Object* RelaxConsole::Print(RelaxFloat* data)
{
	qout << QString::number(data->GetData());
	return nullptr;
}

Object* RelaxConsole::Print(RelaxBool* data)
{
	qout << (data->GetData() ? "true" : "false");
	return nullptr;
}

RelaxString* RelaxConsole::Read()
{
	return new RelaxString(qin.readLine());
}

void RelaxConsole::GenerateMetaInfo()
{
	metaClass = new StdClass("Relax.Console", {
		// Write
		StdMethod("Write", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.String")}, [&](Stack& stack) -> Object*
		{
			return RelaxConsole::Write(dynamic_cast<RelaxString*>(stack.pop()));
		},AccessModifier::PUBLIC, true),

		StdMethod("Write", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Int32")}, [&](Stack& stack) -> Object*
		{
			return RelaxConsole::Write(dynamic_cast<RelaxInt32*>(stack.pop()));
		},AccessModifier::PUBLIC, true),

		StdMethod("Write", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Float")}, [&](Stack& stack) -> Object*
		{
			return RelaxConsole::Write(dynamic_cast<RelaxFloat*>(stack.pop()));
		},AccessModifier::PUBLIC, true),

		StdMethod("Write", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Bool")}, [&](Stack& stack) -> Object*
		{
			return RelaxConsole::Write(dynamic_cast<RelaxBool*>(stack.pop()));
		},AccessModifier::PUBLIC, true),

		// Read
		StdMethod("Read", "Relax.String", "Relax.Console", {}, [&](Stack& stack) -> Object*
		{
			return RelaxConsole::Read();
		},AccessModifier::PUBLIC, true)
	});

	if (Args::args.contains("-print2write"))
	{
		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.String")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Write(dynamic_cast<RelaxString*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));

		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Int32")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Write(dynamic_cast<RelaxInt32*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));

		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Float")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Write(dynamic_cast<RelaxFloat*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));

		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Bool")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Write(dynamic_cast<RelaxBool*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));
	}
	else
	{
		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.String")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Print(dynamic_cast<RelaxString*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));

		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Int32")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Print(dynamic_cast<RelaxInt32*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));

		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Float")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Print(dynamic_cast<RelaxFloat*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));

		metaClass->AddMethod(StdMethod("Print", "void", "Relax.Console", QVector<Parameter>{Parameter("Relax.Bool")}, [&](Stack& stack) -> Object*
			{
				return RelaxConsole::Print(dynamic_cast<RelaxBool*>(stack.pop()));
			}, AccessModifier::PUBLIC, true));
	}
}