#include "Private.h"
#include "Protected.h"
#include "Public.h"
#include <iostream>
using namespace std;

int mod_choose() {
	int submenu;
	cout << "Choose modifier:" << endl;
	cout << "[1] Private." << endl;
	cout << "[2] Protected." << endl;
	cout << "[3] Public." << endl;
	cout << "[4] Exit." << endl;
	cout << ">> " << endl;
	cin >> submenu;
	return submenu;
}

int main() {
	int menu;
	int uservalue;
	Private priv;
	Private priv_copy;
	Private priv_merged;
	Protected prot;
	Protected prot_copy;
	Protected prot_merged;
	Public publ;
	Public publ_copy;
	Public publ_merged;
	do {
		system("cls");
		cout << "Welcome!" << endl;
		cout << "Choose action:" << endl;
		cout << "[1] Add element to queue." << endl;
		cout << "[2] Extract element from queue." << endl;
		cout << "[3] Output on display." << endl;
		cout << "[4] Calculate last queue element, which lower than mean harmonic." << endl;
		cout << "[5] Create copy of queue." << endl;
		cout << "[6] Merge queues (only if copy created!)." << endl;
		cout << "[7] Exit." << endl;
		cout << ">> ";
		cin >> menu;
		switch (menu) {
		case 1:
			switch (mod_choose()) {
			case 1:
				cout << "Enter value:" << endl;
				cout << ">> ";
				cin >> uservalue;
				priv.Add(uservalue);
				break;
			case 2:
				cout << "Enter value:" << endl;
				cout << ">> ";
				cin >> uservalue;
				prot.Add(uservalue);
				break;
			case 3:
				cout << "Enter value:" << endl;
				cout << ">> ";
				cin >> uservalue;
				publ.Add(uservalue);
				break;
			case 4:
				break;
			}
			system("pause");
			break;
		case 2:
			switch (mod_choose()) {
			case 1:
				priv.Del();
				cout << "Extraction completed succesfully!" << endl;
				break;
			case 2:
				prot.Del();
				cout << "Extraction completed succesfully!" << endl;
				break;
			case 3:
				publ.Del();
				cout << "Extraction completed succesfully!" << endl;
				break;
			case 4:
				break;
			}
			system("pause");
			break;
		case 3:
			switch (mod_choose()) {
			case 1:
				priv.Print();
				break;
			case 2:
				prot.Print();
				break;
			case 3:
				publ.Print();
				break;
			case 4:
				break;
			}
			system("pause");
			break;
		case 4:
			switch (mod_choose()) {
			case 1:
				priv.Print();
				priv.Calc();
				break;
			case 2:
				prot.Print();
				prot.Calc();
				break;
			case 3:
				publ.Print();
				publ.Calc();
				break;
			case 4:
				break;
			}
			system("pause");
			break;
		case 5:
			switch (mod_choose()) {
			case 1:
				priv.Copy(priv_copy);
				cout << "Queue successfully copied!" << endl;
				priv_copy.Print();
				break;
			case 2:
				prot.Copy(prot_copy);
				cout << "Queue successfully copied!" << endl;
				prot_copy.Print();
				break;
			case 3:
				publ.Copy(publ_copy);
				cout << "Queue successfully copied!" << endl;
				publ_copy.Print();
				break;
			case 4:
				break;
			}
			system("pause");
			break;
		case 6:
			switch (mod_choose()) {
			case 1:
				priv_merged = *priv.Merge(&priv_copy);
				cout << "Queue successfully merged!" << endl;
				priv_merged.Print();
				break;
			case 2:
				prot_merged = *prot.Merge(&prot_copy);
				cout << "Queue successfully merged!" << endl;
				prot_merged.Print();
				break;
			case 3:
				publ_merged = *publ.Merge(&publ_copy);
				cout << "Queue successfully merged!" << endl;
				publ_merged.Print();
				break;
			case 4:
				break;
			}
			system("pause");
			break;
		case 7:
			break;
		}
	} while (menu != 7);
	return 0;
}