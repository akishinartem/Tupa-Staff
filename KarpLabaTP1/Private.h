#pragma once

#include "Parent.h"

class Private : private Parent {
	elem* Head;
	elem* Tail;
	int num;
public:
	Private();
	~Private();
	void Add(int uservalue);
	void Del();
	void Print();
	void Copy(Private& op1);
	void Calc();
	Private* Merge(Private* op1);
	elem* GetHead();
	elem* GetTail();
	int GetNum();
	void SetHead(elem* value);
	void SetTail(elem* value);
	void SetNum(int usernum);
};
