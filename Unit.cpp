#include "Unit.h"
#include <iostream>
#include <string>
using namespace std;
	Unit::Unit(string Special, int Health, int Def, int Speed, int Str, int SpAtk) { 
		setHealth(Health);
		setDef(Def);
		setSpeed(Speed);
		setStr(Str);
		setSpAtk(SpAtk);
	}
	void Unit::setSpecial(string a) {
		this->Special = a;
	}
	void Unit::setHealth(int a) {
		this->Health = a;
	}
	void Unit::setDef(int a) {
		this->Def = a;
	}
	void Unit::setSpeed(int a) {
		this->Speed = a;
	}
	void Unit::setStr(int a) {
		this->Str = a;
	}
	void Unit::setSpAtk(int a) {
		this->SpAtk = a;
	}
	string Unit::getSpecial() {
		return this->Special;
	}
	int Unit::getHealth() {
		return this->Health;
	}
	int Unit::getDef() {
		return this->Def;
	}
	int Unit::getSpeed() {
		return this->Speed;
	}
	int Unit::getStr() {
		return this->Str;
	}
	int Unit::getSpAtk() {
		return this->SpAtk;
	}
	string Unit::toString() {
		string str = "";
		str += to_string(getHealth())+to_string(getDef())+to_string(getSpeed())+to_string(getStr());
		return str;
	}
