#include "Squad.h"
#include <iostream>
#include <string>
#include "Unit.h"
using namespace std;
	Squad::Squad(Unit* Capitan) { 
		setCapitan(Capitan);
		vector<Unit*>* v = new vector<Unit*>();
		setEquipo(v);
	}
	void Squad::setCapitan(Unit* a) {
		this->Capitan = a;
	}
	void Squad::setEquipo(vector<Unit*>* a) {
		this->Equipo = a;
	}
	Unit* Squad::getCapitan() {
		return this->Capitan;
	}
	vector<Unit*>* Squad::getEquipo() {
		return this->Equipo;
	}
	string Squad::toString() {
		string str = "";
		for (int i = 0;i<getEquipo()->size();i++) {
			str += getEquipo()->at(i)->toString();
			str += "\n";
		}
		return str;
	}
