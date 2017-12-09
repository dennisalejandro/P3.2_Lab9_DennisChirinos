#include "Flying.h"
#include "Boo.h"
#include <iostream>
#include <string>
using namespace std;
	Boo::Boo(string Special, int Health) : Flying(Special, Health, 60, 20, 15, 0, 2) { 
	}
	int Boo::getType() {
		return 3;
	}
	string Boo::toString() {
		string str = "Boo: ";
		str += to_string(getHealth())+", "+to_string(getDef())+", "+to_string(getSpeed())+", "+to_string(getStr());
		return str;
	}
