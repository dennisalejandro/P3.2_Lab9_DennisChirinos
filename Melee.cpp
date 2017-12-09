#include "Melee.h"
#include <iostream>
#include <string>
using namespace std;
	Melee::Melee(string Special, int Health, int Def, int Speed, int Str, int SpAtk, int ID) : Unit(Special, Health, Def, Speed, Str, SpAtk) { 
		setID(1);
	}
	void Melee::setID(int id) {
		this->ID = id;
	}
	int Melee::getID() {
		return 1;
	}
	int Melee::getType() {
		return 0;
	}
