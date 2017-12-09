#include "Flying.h"
#include <iostream>
#include <string>
using namespace std;
	Flying::Flying(string Special, int Health, int Def, int Speed, int Str, int SpAtk, int ID) : Unit(Special, Health, Def, Speed, Str, SpAtk) { 
		setID(1);
	}
	void Flying::setID(int id) {
		this->ID = id;
	}
	int Flying::getID() {
		return this->ID;
	}
	int Flying::getType() {
		return 0;
	}
