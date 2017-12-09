#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Unit.h"
using namespace std;
class Squad {
	private: 
		Unit* Capitan;
		vector<Unit*>* Equipo;
	public: 
		Squad(Unit*);
		~Squad();
		void  setCapitan(Unit*);
		void  setEquipo(vector<Unit*>*);
		Unit* getCapitan();
		vector<Unit*>* getEquipo();
		virtual string toString();
};
