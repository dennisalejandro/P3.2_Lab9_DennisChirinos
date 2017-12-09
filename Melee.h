#pragma once
#include <iostream>
#include <string>
#include "Unit.h"
using namespace std;
class Melee : public Unit {
	private: 
		int ID;
		int Type;
	public: 
		Melee(string, int, int, int, int, int, int);
		void  setID(int);
		int getID();
		virtual int getType();
};
