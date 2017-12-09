#include "Range.h"
#include "Bro.h"
#include <iostream>
#include <string>
using namespace std;
	Bro::Bro(string Special, int Health) : Range(Special,Health, 20, 35, 8, 0, 3) { 
	}
	int Bro::getType() {
		return 5;
	}
	string Bro::toString() {
		string str = "Hammer Bro: ";
		str += to_string(getHealth())+to_string(getDef())+to_string(getSpeed())+to_string(getStr());
		return str;
	}
