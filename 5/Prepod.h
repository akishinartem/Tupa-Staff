#pragma once
#include "Base.h"
using namespace std;

class Prepod : public VYZ {
private:
	string FIO;
	string groups;
	string discipline;
public:
	Prepod();
	~Prepod();
	void Add();
	void Delete();
	void Show();
	void Change();
	void Copy(Prepod& op1);
};
