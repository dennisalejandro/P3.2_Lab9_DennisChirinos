#pragma once
#include <iostream>
#include <string>
#include "Range.h"
using namespace std;
class Bro : public Range {
	protected:
	public: 
		Bro(string, int);
		virtual int getType();
		virtual string toString();
		virtual int getSpAtk();
};
