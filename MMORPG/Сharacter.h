#pragma once
#include<iostream>
#include <string>
using namespace std;


class �haracter
{
public:
	�haracter(string name);
	void printStatusbar(int amount);
	void printCharacter();
	
private:
	string _name;
	string _type;
	string _profession;
	string _weapon;
	int _hp;
	int _mp;
	int _cp;

};

