#include <iostream>
#include <string.h>

using namespace std;



char name[20];
char nameClan[20] = "Default";
int disciples = 0, numdisciples = 0;

void setName(char newname[20])
{
	cout << "You change : " << name << " for " << newname << endl;
	
}
void printName()
{
	cout << "\nYour name are: "<< name;
}
void printNumDisciples()
{
	cout << disciples;
}
void setNumDisciples()
{
	 disciples += numdisciples;
	 cout << "\nthe num of disciples are: " << disciples;
}
void printClanName()
{
	cout << "\n Clan "<< nameClan;
}
void setClanName(char newClaname[20])
{
	cout << "You change : " << nameClan << " for " << newClaname << endl;

}
int main()
{
	bool quit = false;
	unsigned int order;
	char  newname[20], newClanName[20];
	int decision;
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
			cout << "\nYou want 1-remember your name, 2-change name or 3-you have wrong?";
			cin >> decision;
			if (decision == 1) { printName(); break; } // de aqui para abajo se organiza falta funciones;
			else if (decision ==2) { 
				cout << "\n Say the new name: ";
				cin >> newname;
				setName(newname);
				strcpy_s(name, newname);
				break; }
			else if (decision ==3) { break; }
			else { cout << "that's not are nothing!"; break; }

		case 2:
			cout << "\nYou want 1-remember your disciples, 2-change disciples or 3-you have wrong?";
			cin >> decision;
			if (decision == 1) { printNumDisciples(); break; }
			else if (decision == 2) { cout << "\n Say the number of diciples do you want to change: (ex +3  or -3) "; cin >> numdisciples; setNumDisciples();  break; }
			else if (decision == 3) { break; }
			else { break; }
		case 3:
			cout << "\nyou want 1-remember your clan name, 2-change clan name or 3-you have wrong?)";
			cin >> decision;
			if (decision == 1) { printClanName(); break; }
			else if (decision == 2) {
				cout << "\n Say the new clan name: ";
				cin >> newClanName;
				setClanName(newClanName);
				strcpy_s(nameClan, newClanName);
				break; }
			else if (decision == 3) { break; }
			else { break; }
		/*case 4:
			cout << "\nyou want change yout capabilities or see or you have wrong? ( say change or see o wrong)";
			cin >> decision;
			if (decision ==1) { break; }
			else if (decision == 2) { break; }
			else if (decision == 3) { break; }
			else { break; }

		case 5:
			cout << "\nyou want set your weapons, get number, see if u has the weapon or you have wrong? (say want, get, see or wrong)";
			cin >> decision;
			cin >> decision;
			if (decision ==1) { break; }
			else if (decision == 2) { break; }
			else if (decision == 3) { break; }
			else { break; }
		case 6:
			cout << "\nyou want set your animal, get animals, see if u has the animals or you have wrong? (say want, get, see or wrong)";
			
			cin >> decision;
			if (decision ==1) { break; }
			else if (decision == 2) { break; }
			else if (decision == 3) { break; }
			else { break; }
		case 7:
			cout << "\nyou want register in tournament or see if u are register or you have wrong? ( say register or comprobation o wrong)";
			cin >> decision;
			if (decision ==1) { break; }
			else if (decision == 2) { break; }
			else if (decision == 3) { break; }
			else { break; }*/
			
		}
	};









	getchar();
}