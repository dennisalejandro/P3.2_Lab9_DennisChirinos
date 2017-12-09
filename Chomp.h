#pragma once
#include <iostream>
#include <string>
#include "Melee.h"
using namespace std;
class Chomp : public Melee {
	protected:
	public: 
		Chomp(string, int);
		virtual int getType();
		virtual string toString();
		virtual int getSpAtk();
};
