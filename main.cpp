#include <iostream>
#include <vector>
#include <string>
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
int main() {
	int op = 0;
	vector<Squad*>* vSquad = new vector<Squad*>();
	vector<Unit*>* vUnit = new vector<Unit*>();
	while (op!=7) {
		cout << "1) Crear Minion\n";
		cout << "2) Crear Equipo\n";
		cout << "3) Eliminar Minion\n";		
		cout << "4) Simular Batalla\n";
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
						//vUnit->push_back(G);
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
					cout << vUnit->at(i)->toString();
				}
				cout << "Elije capitan \n";
				cin >> NumCap;
				
				Squad* S = new Squad(vUnit->at(NumCap));
				for (int i = 0;i<6;i++) {
					cout << "Elige Miembro numero " << i << "\n";
					cin >> NumSq;
					S->getEquipo()->push_back(vUnit->at(NumSq));
				}
				vSquad->push_back(S);
			} break;
			case 3: {
				cout << "Cambiar color/Tamaño de quien? \n";
				string Something;
				cin >> Something;
			} break;
			case 4: {
				cout << "Ingrese Equipo 1\n";
				int NumTeam1;
				int NumTeam2;
				for (int i = 0;i<vSquad->size();i++) {
					cout << vSquad->at(i)->toString();
				}
				cin >> NumTeam1;
				cout << "Ingrese Equipo 2\n";
				cin >> NumTeam2;
				vector<Unit> Team1;
				vector<Unit> Team2;
				for (int i = 0;i<vSquad->at(NumTeam1)->getEquipo()->size();i++) {
					Team1.push_back(*vSquad->at(NumTeam1)->getEquipo()->at(i));
				}
			} break;
		}
	}
	return 0;
}
