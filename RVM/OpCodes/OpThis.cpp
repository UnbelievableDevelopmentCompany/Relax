#include "OpThis.h"
#include "../Core/FieldObject.h"

void OpThis::Run()
{
	frame->GetStack().push(frame->AddValue(new Value(ValueType::OBJECT,  UValue{.object = frame->GetObjectThis()} )));
}

void OpThis::Parse(HANDLE& device)
{
}