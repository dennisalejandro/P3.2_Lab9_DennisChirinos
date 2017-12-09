#include "Melee.h"
#include "Chomp.h"
#include <iostream>
#include <string>
using namespace std;
	Chomp::Chomp(string Special, int Health) : Melee(Special,Health, 60, 20, 15, 0, 1) { 
	}
	int Chomp::getType() {
		return 2;
	}
	string Chomp::toString() {
		string str = "Chomp: ";
		str += to_string(getHealth())+to_string(getDef())+to_string(getSpeed())+to_string(getStr());
		return str;
	}
