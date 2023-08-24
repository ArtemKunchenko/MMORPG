#pragma once
#include<iostream>
#include <string>
using namespace std;

class Character
{
public:
	Character(string name);
	void printCharacter();
protected:
	void setType(string type);
	void setProfession(string profession);
	void setWeapon(string weapon);
	void setHP(int hp);
	void setMP(int mp);
	void setCP(int cp);
private:
	string _name;
	string _type;
	string _profession;
	string _weapon;
	int _hp;
	int _mp;
	int _cp;
	void printStatusbar(int amount);
};

#pragma region SCOUT
class Scout : public Character
{
public:
	Scout(string name) :Character(name)
	{
		setType("Scout");
		setHP(15);
		setMP(10);
		setCP(15);
	}
};

class Assassin :public Scout
{
public:
	Assassin(string name) :Scout(name)
	{
		setProfession("Assassin");
		setWeapon("Stiletto");
	}
};
class Ranger :public Scout
{
public:
	Ranger(string name) :Scout(name)
	{
		setProfession("Ranger");
		setWeapon("Knife");
	}
};
#pragma endregion

#pragma region WARRIOR
class Warrior : public Character
{
public:
	Warrior(string name) :Character(name)
	{
		setType("Warrior");
		setHP(15);
		setMP(5);
		setCP(20);
	}
};

class Templar :public Warrior
{
public:
	Templar(string name) :Warrior(name)
	{
		setProfession("Templar");
		setWeapon("Axe");
	}
};
class Gladiator :public Warrior
{
public:
	Gladiator(string name) :Warrior(name)
	{
		setProfession("Gladiator");
		setWeapon("Hammer");
	}
};
#pragma endregion

#pragma region PRIEST
class Priest : public Character
{
public:
	Priest(string name) :Character(name)
	{
		setType("Priest");
		setHP(20);
		setMP(15);
		setCP(5);
	}
};

class Cleric :public Priest
{
public:
	Cleric(string name) :Priest(name)
	{
		setProfession("Cleric");
		setWeapon("Spear");
	}
};
class Chanter :public Priest
{
public:
	Chanter(string name) :Priest(name)
	{
		setProfession("Chanter");
		setWeapon("Trident");
	}
};
#pragma endregion

#pragma region MAGE
class Mage : public Character
{
public:
	Mage(string name) :Character(name)
	{
		setType("Mage");
		setHP(15);
		setMP(20);
		setCP(5);
	}
};

class Sorcerer :public Mage
{
public:
	Sorcerer(string name) :Mage(name)
	{
		setProfession("Sorcerer");
		setWeapon("Bow");
	}
};
class Spiritmaster :public Mage
{
public:
	Spiritmaster(string name) :Mage(name)
	{
		setProfession("Spiritmaster");
		setWeapon("Scepter");
	}
};
#pragma endregion

