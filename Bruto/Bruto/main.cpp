#include <iostream>
#include <string.h>

using namespace std;



char name[20];
char nameClan[20];
char setName(char newname[20])
{

	if (!strcmp(newname, name)) {
		cout << "You change :" << name << "for" << newname << endl;

	}
	else { cout << "Your new name is equal to the old"; }
	return newname[20];
}
int main()
{
	bool quit = false;
	unsigned int order;
	char decision[20], newname[20];
	cout << "Hello This is a mini tutorial, when i ask for you order, you can say:\n 0-Quit\n 1-Name\n 2-Num of disciplines\n 3-Clan name\n 4-Capabilities\n 5-Weapons\n 6-Animals\n 7-Registration to the next tournament\n";
	cout << "Well, you enter the number, LET'S START!!!! \n";
	cout << "Say your name: ";
	cin >> name;


	while (quit == false)
	{
		cout << name;
		cout << ",what are you looking for?  ";
		cin >> order;

		switch (order)
		{
		case 0:
			quit = true;
			break;
		case 1:
			cout << "\nYou want remember your name, change name or you have wrong? (say remember, change or wrong)";
			cin >> decision;
			if (strcmp(decision, "remember")) {  break; } // de aqui para abajo se organiza falta funciones;
			else if (strcmp(decision, "change\n")) { 
				cout << "\n Say the new name: ";
				cin >> newname;
				name[20] = setName(newname);
				break; }
			else if (strcmp(decision, "wrong")) { break; }
			else { cout << "that's not are nothing!"; break; }

		case 2:
			cout << "\nYou want remember your discipline, change discipline or you have wrong? (say remember, change or wrong)";
			cin >> decision;
			if (strcmp(decision, "remember")) { break; }
			else if (strcmp(decision, "change")) { break; }
			else if (strcmp(decision, "wrong")) { break; }
			else { break; }
		case 3:
			cout << "\nYou want remember your clan name, change clan name or you have wrong? (say remember, change or wrong)";
			cin >> decision;
			if (strcmp(decision, "remember")) { break; }
			else if (strcmp(decision, "change")) { break; }
			else if (strcmp(decision, "wrong")) { break; }
			else { break; }
		case 4:
			cout << "\nYou want change yout capabilities or see or you have wrong? ( say change or see o wrong)";
			cin >> decision;
			if (strcmp(decision, "change")) { break; }
			else if (strcmp(decision, "see")) { break; }
			else if (strcmp(decision, "wrong")) { break; }
			else { break; }

		case 5:
			cout << "\nYou want set your weapons, get number, see if u has the weapon or you have wrong? (say want, get, see or wrong)";
			cin >> decision;
			if (strcmp(decision, "want")) { break; } // de aqui para abajo se organiza falta funciones;
			else if (strcmp(decision, "get")) { break; }
			else if (strcmp(decision, "see")) { break; }
			else if (strcmp(decision, "wrong")) { break; }
			else { break; }
		case 6:
			cout << "\nYou want set your animal, get animals, see if u has the animals or you have wrong? (say want, get, see or wrong)";
			cin >> decision;
			if (strcmp(decision, "want")) { break; } // de aqui para abajo se organiza falta funciones;
			else if (strcmp(decision, "get")) { break; }
			else if (strcmp(decision, "see")) { break; }
			else if (strcmp(decision, "wrong")) { break; }
			else { break; }
		case 7:
			cout << "\nYou want register in tournament or see if u are register or you have wrong? ( say register or comprobation o wrong)";
			cin >> decision;
			if (strcmp(decision, "register")) { break; }
			else if (strcmp(decision, "comprobation")) { break; }
			else if (strcmp(decision, "wrong")) { break; }
			else { break; }

			
		}
	};









	getchar();
}