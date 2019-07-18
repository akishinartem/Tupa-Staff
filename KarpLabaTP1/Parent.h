#pragma once
#include "Element.h"

class Parent {
	elem* Head;
	elem* Tail;
	int num;
public:
	Parent();
	~Parent();
	void Add(int uservalue);
	void Del();
	void Print();
	void Copy(Parent &op1);
	void Calc();
	Parent* Merge(Parent *op1);
	elem *GetHead();
	elem *GetTail();
	int GetNum();
	void SetHead(elem* value);
	void SetTail(elem* value);
	void SetNum(int usernum);
};