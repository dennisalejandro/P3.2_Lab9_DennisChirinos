#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include "Unit.h"
#include "Range.h"
#include "Bro.h"
#include "Magikoopa.h"
#include "Flying.h"
#include "Paratroopa.h"
#include "Boo.h"
#include "Melee.h"
#include "Chomp.h"
#include "Goomba.h"
#include "Squad.h"

using namespace std;
void WriteLog(string);
int main() {
	int op = 0;
	vector<Squad*>* vSquad = new vector<Squad*>();
	vector<Unit*>* vUnit = new vector<Unit*>();
	while (op!=5) {
		cout << "1) Crear Minion\n";
		cout << "2) Crear Equipo\n";
		cout << "3) Eliminar Minion\n";		
		cout << "4) Simular Batalla\n";
		cout << "5) Salir\n";
		cin >> op;
		switch (op) {
			int opA;
			int HP;
			case 1: {
				cout << "De que tipo? \n";
				cout << "1) Goomba \n";
				cout << "2) Chain Chomp\n";
				cout << "3) Boo\n";
				cout << "4) Paratroopa\n";
				cout << "5) Hammer Bro\n";
				cout << "6) Magikoopa\n";
				cin >> opA;
				int HP;
				cout << "Ingrese HP \n";
				cin >> HP;
				string Something;
				cout << "Ingrese su ";
				switch (opA) {
					case 1: {
						cout << "Tamaño \n";
						cin >> Something;
						if ((HP>40)||(HP<20)) {
							HP = 30;	
						}
						Goomba* G = new Goomba(Something, HP);
						vUnit->push_back(G);
					} break;
					case 2: {
						cout << "Color de su Cuerpo \n";
						cin >> Something;
						if ((HP>30)||(HP<10)) {
							HP = 20;	
						}
						Chomp* G = new Chomp(Something, HP);
						vUnit->push_back(G);
					} break;
					case 3: {
						cout << "Color \n";
						cin >> Something;
						if ((HP>40)||(HP<20)) {
							HP = 30;	
						}
						Boo* G = new Boo(Something, HP);
						vUnit->push_back(G);
					} break;
					case 4: {
						cout << "Color de Caparazon \n";
						cin >> Something;
						if ((HP>40)||(HP<20)) {
							HP = 30;	
						}
						Paratroopa* G = new Paratroopa(Something, HP);
						vUnit->push_back(G);
					} break;
					case 5: {
						cout << "Tamaño de martillo\n";
						cin >> Something;
						if ((HP>40)||(HP<20)) {
							HP = 30;	
						}
						Bro* G = new Bro(Something, HP);
						vUnit->push_back(G);
					} break;
					case 6: {
						cout << "Color de traje \n";
						cin >> Something;
						if ((HP>40)||(HP<20)) {
							HP = 30;	
						}
						Magikoopa* G = new Magikoopa(Something, HP);
						vUnit->push_back(G);
					} break;
				}
			} break;
			case 2: {
				int NumCap;
				int NumSq;
				for (int i = 0;i<vUnit->size();i++) {
					cout << vUnit->at(i)->toString() << "\n";
				}
				cout << "Elije capitan \n";
				cin >> NumCap;
				
				Squad* S = new Squad(vUnit->at(NumCap));
				vUnit->erase(vUnit->begin()+NumCap);
				for (int i = 0;i<6;i++) {
					cout << "Elige Miembro numero " << (i+1) << "\n";
					cin >> NumSq;
					S->getEquipo()->push_back(vUnit->at(NumSq));
					vUnit->erase(vUnit->begin()+NumSq);
				}
				vSquad->push_back(S);
			} break;
			case 3: {
				int who;
				cout << "Cambiar color/Tamaño de quien? \n";
				cin >> who;
				string Something;
				cin >> Something;
			} break;
			case 4: {
				cout << "Ingrese Equipo 1\n";
				int NumTeam1 = 0;
				int NumTeam2 = 0;
				for (int i = 0;i<vSquad->size();i++) {
					cout << vSquad->at(i)->toString();
				}
				cin >> NumTeam1;
				cout << "Ingrese Equipo 2\n";
				cin >> NumTeam2;
				vector<Unit> Team1;
				int Team1Wins = 0;
				vector<Unit> Team2;
				int Team2Wins = 0;
				for (int i = 0;i<vSquad->at(NumTeam1)->getEquipo()->size();i++) {
					//cout << "n";
					Team1.push_back(*vSquad->at(NumTeam1)->getEquipo()->at(i));
				}
				for (int i = 0;i<vSquad->at(NumTeam2)->getEquipo()->size();i++) {
					//cout << "m";
					Team2.push_back(*vSquad->at(NumTeam1)->getEquipo()->at(i));
				}
				//start battle
				WriteLog("///////////////\n");
				for (int i = 0;i<6;i++) {
					int Break = 0;
					while ((Team1.at(i).getHealth()>=0)||(Team2.at(i).getHealth()>=0)) {
						Break++;
						WriteLog("Pelea: "+to_string(i)+"\n");
						//turn team 1
						int atk = Team1.at(i).getStr();
						if ((Team1.at(i).getID()==1)&&(Team2.at(i).getID()==3)) {
							atk = atk*1.5;
						}
						if ((Team1.at(i).getID()==3)&&(Team2.at(i).getID()==2)) {
							atk = atk*1.5;
						}
						if ((Team1.at(i).getID()==2)&&(Team2.at(i).getID()==1)) {
							atk = atk*1.5;
						}
						int Rndom = rand() % 5;
						if ((Rndom*10)>=Team2.at(i).getSpeed()) {
							Team2.at(i).setHealth(Team2.at(i).getHealth()-(atk-Team2.at(i).getDef()));
							WriteLog("El miembro "+to_string(i)+" del equipo 1 ataco por: "+to_string(atk)+"\n");
							cout << ("El miembro "+to_string(i)+" del equipo 1 ataco por: "+to_string(atk)+"\n");
							WriteLog("HP restante es: "+to_string(Team1.at(i).getHealth())+"\n");
							cout << ("HP restante es: "+to_string(Team1.at(i).getHealth())+"\n");
						} else {
							cout << "FALLO EL ATAQUE \n";
							WriteLog("Fallo el ataque");
						}
						//turn team 2
						atk = Team2.at(i).getStr();
						if ((Team2.at(i).getID()==1)&&(Team1.at(i).getID()==2)) {
							atk = atk*1.5;
						}
						if ((Team2.at(i).getID()==2)&&(Team1.at(i).getID()==3)) {
							atk = atk*1.5;
						}
						if ((Team2.at(i).getID()==3)&&(Team1.at(i).getID()==1)) {
							atk = atk*1.5;
						}
						Rndom = rand() % 5;
						if ((Rndom*10)>=Team1.at(i).getSpeed()) {
							Team1.at(i).setHealth(Team1.at(i).getHealth()-(atk-Team1.at(i).getDef()));
							WriteLog("El miembro "+to_string(i)+" del equipo 2 ataco por: "+to_string(atk)+"\n");
							WriteLog("HP restante es: "+to_string(Team1.at(i).getHealth())+"\n");
						} else {
							cout << "FALLO EL ATAQUE \n";
							WriteLog("Fallo el ataque \n");
						}
						
						// check if dead
						if (Team2.at(i).getHealth()<=0) {
							Team1Wins++;
						}
						if (Team1.at(i).getHealth()<=0) {
							Team2Wins++;
						}
						if (Break >= 99) {
							cout << "breaked \n";
							break;
						}
					}
					cout << "Team 1 tiene: " << Team1Wins << "\n";
					cout << "Team 2 tiene: " << Team2Wins << "\n";
				}
			} break;
		}
	}
	for (int i = 0;i<vUnit->size();i++) {
		delete vUnit->at(i);
	}
	for (int i = 0;i<vSquad->size();i++) {
		delete vSquad->at(i);
	}
	delete vUnit;
	delete vSquad;
	return 0;
}
void WriteLog(string text) {
	ofstream File;
	File.open("log.txt", ios::out | ios::app );
	File << text;
	File.close();
}
