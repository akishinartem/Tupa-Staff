#pragma once
#include "Base.h"
using namespace std;

class Personal : public VYZ {
private:
	string FIO;
	string spec;
	string tel;
	string obl;
public:
	Personal();
	~Personal();
	void Add();
	void Delete();
	void Show();
	void Change();
	void Copy(Personal& op1);
};
