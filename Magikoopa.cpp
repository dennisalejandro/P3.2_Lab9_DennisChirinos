#include "Range.h"
#include "Magikoopa.h"
#include <iostream>
#include <string>
using namespace std;
	Magikoopa::Magikoopa(string Special, int Health) : Range(Special,Health, 0, 60, 7, 0, 3) { 
	}
	int Magikoopa::getType() {
		return 6;
	}
	string Magikoopa::toString() {
		string str = "Magikoopa: ";
		str += to_string(getHealth())+", "+to_string(getDef())+", "+to_string(getSpeed())+", "+to_string(getStr());
		return str;
	}
