#pragma once
#include"Base.h"
using namespace std;

class Student : public VYZ {
private:
	string FIO;
	int group;
	string spec;
	int course;
	float sr_ball;
public:
	Student();
	~Student();
	void Add();
	void Delete();
	void Show();
	void Change();
	void Copy(Student& op1);
};
