#include "Flying.h"
#include "Paratroopa.h"
#include <iostream>
#include <string>
using namespace std;
	Paratroopa::Paratroopa(string Special, int Health) : Flying(Special,Health, 40, 10, 9, 0, 2) { 
	}
	int Paratroopa::getType() {
		return 4;
	}
	string Paratroopa::toString() {
		string str = "Paratroopa: ";
		str += to_string(getHealth())+", "+to_string(getDef())+", "+to_string(getSpeed())+", "+to_string(getStr());
		return str;
	}
