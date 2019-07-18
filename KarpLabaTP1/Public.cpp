#include "Public.h"

#include <iostream>
using namespace std;

Public::Public() {
	Head = nullptr;
	Tail = nullptr;
	num = 0;
}

Public::~Public() {
	elem* temp = Tail;
	while (temp) {
		temp = Tail->Prev;
		delete Tail;
	}
}

void Public::Add(int uservalue) {
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

void Public::Del() {
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

void Public::Print() {
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

void Public::Copy(Public& op1) {
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
void Public::Calc() {
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

Public* Public::Merge(Public* op1) {
	elem* temp = Tail;
	Public* que = new Public;
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

elem* Public::GetHead() {
	return Head;
}

elem* Public::GetTail() {
	return Tail;
}

int Public::GetNum() {
	return num;
}

void Public::SetHead(elem* value) {
	Head = value;
}

void Public::SetTail(elem* value) {
	Tail = value;
}

void Public::SetNum(int usernum) {
	num = usernum;
}
