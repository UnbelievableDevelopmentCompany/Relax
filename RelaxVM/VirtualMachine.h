#pragma once
#include <QtCore>

#include "ByteArrayLib.h"
#include "ConsoleTextStream.h"
#include "Exceptions/ExitException.h"
#include "Functions/Exit.h"
#include "Class.h"
#include "Instruction.h"
#include "ClassList.h"
#include "Object.h"
#include "RelaxString.h"
#include "RelaxArray.h"
#include "RelaxInt32.h"
#include "RelaxBool.h"
#include "Variable.h"
#include "Heap.h"
#include "StdClass.h"
#include "StdClassList.h"
#include "Stack.h"
#include "Frame.h"
#include "Args.h"

class VirtualMachine
{
public:
	VirtualMachine();
	~VirtualMachine();
	void Start();
	void ProcessInstructionExecuting(Instruction instruction, QIODevice& device, Frame& frame);
	void ProccesInstructionCreating(Instruction instruction, QIODevice& device);
	void ExecuteMethod();


	void CreateMainClass(QIODevice& device);
	void CreateClass(QIODevice& device);
	void CreateMethod(QIODevice& device);

	void CallMethod(QIODevice& device, Frame& currentFrame);
	void PushStr(QIODevice& device, Frame& currentFrame);
	void PushInt32(QIODevice& device, Frame& currentFrame);
	void Return(QIODevice& device, Frame& currentFrame);
	void New(QIODevice& device, Frame& currentFrame);
	void Set(QIODevice& device, Frame& currentFrame);
	void Get(QIODevice& device, Frame& currentFrame);
	void Local(QIODevice& device, Frame& currentFrame);
	void Dup(QIODevice& device, Frame& currentFrame);
	void Add(QIODevice& device, Frame& currentFrame);
	void Jmp(QIODevice& device, Frame& currentFrame);
	void Jmpif(QIODevice& device, Frame& currentFrame);
	void Gc(QIODevice& device, Frame& currentFrame);
	void Newarr(QIODevice& device, Frame& currentFrame);
	void Getarr(QIODevice& device, Frame& currentFrame);
	void Setarr(QIODevice& device, Frame& currentFrame);
	void PushBool(QIODevice& device, Frame& currentFrame);
	void PushFloat(QIODevice& device, Frame& currentFrame);
	void Sub(QIODevice& device, Frame& currentFrame);
	void Mul(QIODevice& device, Frame& currentFrame);
	void Div(QIODevice& device, Frame& currentFrame);

private:
	QString filename;
	QFile executableFile;
	Class* mainClass;
	ClassList classes;
	Heap heap;
	QStack<Frame*> frameStack;

	int version = 1;
};

