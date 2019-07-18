#pragma once

#include "Parent.h"

class Public : public Parent {
	elem* Head;
	elem* Tail;
	int num;
public:
	Public();
	~Public();
	void Add(int uservalue);
	void Del();
	void Print();
	void Copy(Public& op1);
	void Calc();
	Public* Merge(Public* op1);
	elem* GetHead();
	elem* GetTail();
	int GetNum();
	void SetHead(elem* value);
	void SetTail(elem* value);
	void SetNum(int usernum);
};
