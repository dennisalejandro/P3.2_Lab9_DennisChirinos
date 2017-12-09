#include "Melee.h"
#include "Goomba.h"
#include <iostream>
#include <string>
using namespace std;
	Goomba::Goomba(string Special, int Health) : Melee(Special,Health, 60, 20, 15, 0, 1) { 
	}
	int Goomba::getType() {
		return 1;
	}
	string Goomba::toString() {
		string str = "Goomba: ";
		str += to_string(getHealth())+to_string(getDef())+to_string(getSpeed())+to_string(getStr());
		return str;
	}
