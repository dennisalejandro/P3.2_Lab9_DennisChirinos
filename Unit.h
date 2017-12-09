#pragma once
#include <iostream>
#include <string>
using namespace std;
class Unit {
	private: 
		string Special;
		int Health;
		int Def;
		int Speed;
		int Str;
		int SpAtk;
	public: 
		Unit(string, int, int, int, int, int);
		void  setSpecial(string);
		void  setHealth(int);
		void  setDef(int);
		void  setSpeed(int);
		void  setStr(int);
		void  setSpAtk(int);
		string getSpecial();
		int getHealth();
		int getDef();
		int getSpeed();
		int getStr();
		int getSpAtk();
		virtual string toString();
};
