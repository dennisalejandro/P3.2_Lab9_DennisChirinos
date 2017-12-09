#pragma once
#include <iostream>
#include <string>
#include "Melee.h"
using namespace std;
class Goomba : public Melee {
	protected:
	public: 
		Goomba(string, int);
		virtual int getType();
		virtual string toString();
};
