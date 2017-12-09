#pragma once
#include <iostream>
#include <string>
#include "Flying.h"
using namespace std;
class Paratroopa : public Flying {
	protected:
	public: 
		Paratroopa(string, int);
		virtual int getType();
		virtual string toString();
		virtual int getSpAtk();
};
