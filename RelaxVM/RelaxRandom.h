#pragma once
#include "Object.h"
#include "RelaxInt32.h"

class RelaxRandom : public Object
{
public:
	RelaxRandom() {}
	QString GetDataType() override;
	static RelaxInt32* GenerateInt32();
	static RelaxInt32* GenerateInt32(int min, int max);
};

