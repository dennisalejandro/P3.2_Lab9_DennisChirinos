#pragma once
#include <iostream>
#include <string>
#include "Unit.h"
using namespace std;
class Range : public Unit {
	private: 
		int ID;
		int Type;
	public: 
		Range(string, int, int, int, int, int, int);
		void  setID(int);
		int getID();
		virtual int getType();
};
