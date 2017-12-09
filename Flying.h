#pragma once
#include <iostream>
#include <string>
#include "Unit.h"
using namespace std;
class Flying : public Unit {
	private: 
		int ID;
		int Type;
	public: 
		Flying(string, int, int, int, int, int, int);
		void  setID(int);
		int getID();
		virtual int getType();
};
