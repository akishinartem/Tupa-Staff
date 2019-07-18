#include "Parent.h"

#include <iostream>
using namespace std;

Parent::Parent() {
	Head = nullptr;
	Tail = nullptr;
	num = 0;
}

Parent::~Parent() {
	elem* temp = Tail;
	while (temp) {
		temp = Tail->Prev;
		delete Tail;
	}
}

void Parent::Add(int uservalue) {
	elem* temp = new elem;
	if (!num) {
		temp->Value = uservalue;
		temp->Prev = Tail;
		Tail = temp;
		Head = temp;
	}
	else {
		temp->Value = uservalue;
		temp->Prev = Tail;
		Tail = temp;
	}
	num++;
}

void Parent::Del() {
	if (!num) {
		cout << "Queue is empty!" << endl;
	}
	else {
		if (num == 1) {
			delete Head;
			Head = nullptr;
			Tail = nullptr;
		}
		else {
			elem* temp = Tail;
			while (temp->Prev != Head) {
				temp = temp->Prev;
			}
			delete Head;
			Head = temp;
			Head->Prev = nullptr;
		}
		num--;
	}
}

void Parent::Print() {
	if (!num) {
		cout << "Queue is empty!" << endl;
	}
	else {
		elem* temp = Tail;
		int* Arr = new int[num];
		int l = num - 1;
		for (int i = 0; i < num; i++) {
			Arr[l--] = temp->Value;
			temp = temp->Prev;
		}
		cout << "Queue: " << endl;
		for (int i = 0; i < num; i++) {
			cout << "[" << Arr[i] << "] ";
		}
		delete[] Arr;
	}
}

void Parent::Copy(Parent &op1) {
	elem* temp = Tail;
	int* Arr = new int[num];
	int l = num - 1;
	for (int i = 0; i < num; ++i) {
		Arr[l--] = temp->Value;
		temp = temp->Prev;
	}
	for (l = 0; l < num; l++)
		op1.Add(Arr[l]);
	delete[] Arr;
}

//	ÏÎ×ÅÑÀÒÜ ÏÎÐÀÇÌÈÍÀÒÜ
void Parent::Calc() {
	float harm = 0;
	float del = 0;
	int lowr = 0;
	elem* temp = Tail;
	do {
		del += 1 / temp->Value;
		temp = temp->Prev;
	} while (temp != NULL);
	harm = num / del;
	temp = Tail;
	do {
		lowr = temp->Value;
		temp = temp->Prev;
	} while (harm <= temp->Value);
	cout << "Mean harmonic = " << harm << endl;
	cout << "Last lower element = " << lowr << endl;
}

Parent* Parent::Merge(Parent* op1) {
	elem* temp = Tail;
	Parent* que = new Parent;
	int* _Arr1 = new int[num];
	int* _Arr2 = new int[num];
	int l = num - 1;
	for (int i = 0; i < num; i++) {
		_Arr1[l--] = temp->Value;
		temp = temp->Prev;
	}
	temp = op1->Tail;
	l = num - 1;
	for (int i = 0; i < num; i++) {
		_Arr2[l--] = temp->Value;
		temp = temp->Prev;
	}
	for (int i = 0; i < num; i++)
		que->Add(_Arr1[i]);
	for (int i = 0; i < num; i++)
		que->Add(_Arr2[i]);
	delete[] _Arr1;
	delete[] _Arr2;
	_Arr1 = nullptr;
	_Arr2 = nullptr;
	return que;
}

elem* Parent::GetHead() {
	return Head;
}

elem* Parent::GetTail() {
	return Tail;
}

int Parent::GetNum() {
	return num;
}

void Parent::SetHead(elem* value) {
	Head = value;
}

void Parent::SetTail(elem* value) {
	Tail = value;
}

void Parent::SetNum(int usernum) {
	num = usernum;
}
