#include "Range.h"
#include <iostream>
#include <string>
using namespace std;
	Range::Range(string Special, int Health, int Def, int Speed, int Str, int SpAtk, int ID) : Unit(Special, Health, Def, Speed, Str, SpAtk) { 
		setID(3);
	}
	void Range::setID(int id) {
		this->ID = id;
	}
	int Range::getID() {
		return this->ID;
	}
	int Range::getType() {
		return 0;
	}
