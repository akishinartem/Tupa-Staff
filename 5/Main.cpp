#include "Base.h"
#include "Keeper.h"
#include <iostream>
using namespace std;

int SubChoose() {
	int x = 0;
	cout << "Выберите действие:" << endl
		<< "[1]" << endl
		<< "[2]" << endl
		<< "[3]" << endl;
	cin >> x;
	return x;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int menu = 0;
	VYZ* obj[3] = { nullptr };
	cout << "Добро пожаловать!" << endl;
	do {
		cout << "Выберите действие:" << endl
			<< "[1]" << endl
			<< "[2]" << endl
			<< "[3]" << endl;
		cin >> menu;
		switch (menu) {
		case 1:
			switch (SubChoose()) {
				//
			}
			obj[menu - 1];
			break;
		case 2:
			switch (SubChoose()) {
				//
			}
			obj[menu - 1];
			break;
		case 3:
			switch (SubChoose()) {
				//
			}
			obj[menu - 1];
			break;
		default:
			break;
		}
		system("cls");
	} while (menu != 0);
	return 0;
}
