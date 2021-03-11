#pragma once
enum Instruction
{
	CREATE_MAIN_CLASS = 1,
	NEW,
	CREATE_CLASS,
	CREATE_METHOD,
	CALL_METHOD,
	GET,
	PUSH_STR,
	PUSH_INT32,
	RETURN,
	SET,
	LOCAL,
	ADD,
	DUP,
	JMP,
	JMPIF,
	GC,
	NEWARR,
	GETARR,
	SETARR,
	PUSH_BOOL,
	PUSH_FLOAT,
	SUB,
	MUL,
	DIV,
	CAST,
	MAX_STACK,
	REF,
	DEREF,
	SETPD,
	FIELD,
	GETFIELD,
	SETFIELD
};