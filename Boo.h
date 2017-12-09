#pragma once
#include <iostream>
#include <string>
#include "Melee.h"
using namespace std;
class Boo : public Flying {
	protected:
	public: 
		Boo(string, int);
		virtual int getType();
		virtual string toString();
};
