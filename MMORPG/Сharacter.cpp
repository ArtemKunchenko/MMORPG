#include "Ñharacter.h"
#include<Windows.h>;
#pragma region SET COLOR
enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};
void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
#pragma endregion

Character::Character(string name)
{
	_name = name;
	_type = "";
	_profession = "";
	_weapon = "";
	_hp = 20;
	_mp = 5;
	_cp = 15;
}

void Character::printStatusbar(int amount)
{
	if (amount > 15 && amount <= 20) SetColor(Green, Black);
	else if (amount > 10 && amount <= 15) SetColor(Blue, Black);
	else if (amount > 5 && amount <= 10) SetColor(Yellow, Black);
	else if (amount > 0 && amount <= 5) SetColor(Red, Black);
	for (int i = 0; i <amount; i++){cout << (char)221;}
	SetColor(White, Black);
	cout << "\n\n";
}

void Character::printCharacter()
{
	cout << "NAME: " << _name << "\n\n";
	cout << "TYPE: " << _type << "\n\n";
	cout << "PROFESSION: " << _profession << "\n\n";
	cout << "WEAPON: " << _weapon << "\n\n";
	cout << "HP: ";
	printStatusbar(_hp);
	cout << "MP: ";
	printStatusbar(_mp);
	cout << "CP: ";
	printStatusbar(_cp);

}

void Character::setType(string type) { _type = type; }

void Character::setProfession(string profession) { _profession = profession; }

void Character::setWeapon(string weapon) { _weapon = weapon; }

void Character::setHP(int hp) { _hp = hp; }

void Character::setMP(int mp) { _mp = mp; }

void Character::setCP(int cp) { _cp = cp; }

