#pragma once
#include "Base.h"
using namespace std;

class Keeper {
private:
	VYZ* Value;
public:
	Keeper();
	~Keeper();
	bool Save();
	bool Load();
};
