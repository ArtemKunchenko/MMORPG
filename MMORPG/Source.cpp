#include<iostream>
#include <string>
#include "Ñharacter.h"
using namespace std;

void setName(string& name);
void choiceCharacter(int &choice1, int &choice2);
void printCharacter(Character& character) {character.printCharacter();}
int main()
{
	string name;
	int choice = 1, choice1=0, choice2=0;
	do
	{
		setName(name);
		choiceCharacter(choice1, choice2);

#pragma region SET AND PRINT CHARACTER
		if (choice1 == 1 && choice2 == 1)
		{
			Assassin character(name);
			printCharacter(character);
		}
		else if (choice1 == 1 && choice2 == 2)
		{
			Ranger character(name);
			printCharacter(character);
		}
		else if (choice1 == 2 && choice2 == 1)
		{
			Templar character(name);
			printCharacter(character);
		}
		else if (choice1 == 2 && choice2 == 2)
		{
			Gladiator character(name);
			printCharacter(character);
		}
		else if (choice1 == 3 && choice2 == 1)
		{
			Cleric character(name);
			printCharacter(character);
		}
		else if (choice1 == 3 && choice2 == 2)
		{
			Chanter character(name);
			printCharacter(character);
		}
		else if (choice1 == 4 && choice2 == 1)
		{
			Sorcerer character(name);
			printCharacter(character);
		}
		else if (choice1 == 4 && choice2 == 2)
		{
			Spiritmaster character(name);
			printCharacter(character);
		}
#pragma endregion

		cout << "To close program - press 0 (try again - any number): ";
		cin >> choice;
		system("cls");
	} while (choice);


	system("pause");
	return 0;
}

void setName(string& name)
{
	cout << "Input name of your character: ";
	cin >> name;
	system("cls");
}

void choiceCharacter(int& choice1, int& choice2)
{
	do
	{
		cout << "Select a type of character!\n\n"
			<< "Scout - press 1\n"
			<< "Warrior - press 2\n"
			<< "Priest - press 3\n"
			<< "Mage - press 4\n\n"
			<< "Make your choice: ";
		cin >> choice1;
		if (choice1 >= 1 && choice1 <= 4) break;
		cout << "\t\t\tERROR!!! Invalid value!!!\n";
	} while (choice1<1||choice1>4);
	system("cls");
	string profession1, profession2;
	switch (choice1)
	{
	case 1:
		profession1 = "Assasin";
		profession2 = "Ranger";
		break;
	case 2:
		profession1 = "Templar";
		profession2 = "Gladiator";
		break;
	case 3:
		profession1 = "Cleric";
		profession2 = "Chanter";
		break;
	case 4:
		profession1 = "Sorcerer";
		profession2 = "Spiritmaster";
		break;
	default:
		break;
	}
	do
	{
		cout << "Select a profession of character!\n\n"
			<< profession1<<" - press 1\n"
			<< profession2<<" - press 2\n\n"
			<< "Make your choice: ";
		cin >> choice2;
		if (choice2 >= 1 && choice2 <= 2) break;
		cout << "\t\t\tERROR!!! Invalid value!!!\n";
	} while (choice2 < 1 || choice2>2);
	system("cls");
}

