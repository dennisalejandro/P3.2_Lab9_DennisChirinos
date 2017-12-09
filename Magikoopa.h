#pragma once
#include <iostream>
#include <string>
#include "Range.h"
using namespace std;
class Magikoopa : public Range {
	protected:
	public: 
		Magikoopa(string, int);
		virtual int getType();
		virtual string toString();
		virtual int getSpAtk();
};
