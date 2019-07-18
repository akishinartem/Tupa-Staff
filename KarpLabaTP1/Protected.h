#pragma once

#include "Parent.h"

class Protected : protected Parent {
	elem* Head;
	elem* Tail;
	int num;
public:
	Protected();
	~Protected();
	void Add(int uservalue);
	void Del();
	void Print();
	void Copy(Protected& op1);
	void Calc();
	Protected* Merge(Protected* op1);
	elem* GetHead();
	elem* GetTail();
	int GetNum();
	void SetHead(elem* value);
	void SetTail(elem* value);
	void SetNum(int usernum);
};
