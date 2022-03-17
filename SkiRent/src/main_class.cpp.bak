/*
 *  main_class.cpp
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */

#include <iostream>
#include <string.h>
#include "SkiRent.h"
using namespace std;
#include <memory>

SkiRent* SkiRent::istance=0;

string friendsGetField(shared_ptr <cliente> c){
	return c->descrizione;
}

void testFriend(){
	shared_ptr <cliente> C4 (new cliente(0,"Friend","Sciatore amico"));
	string desc = friendsGetField(C4);
	cout << "Prova uso dichiarazione friend: "<< endl;
	cout << "Tipo cliente: " << desc << endl << endl;
}

void testSlicing(){
	attrezzatura A = scarponisci("SCA1","Head Rebels Boot","Head", 130, 10.00, 28, 130);
	unique_ptr <attrezzatura> A_p (new scarponisci("SCA1","Head Rebels Boot","Head", 125, 10.00, 28, 130));
	cout << "Assegnamento valore (slicing, perdita campi aggiuntivi della classe scarponi):" <<endl;
	A.stampa(); cout<< endl;
	cout << "Assegnamento riferimento:"<< endl;
	A_p->stampa();
	cout<<endl;
}

int main(){

	SkiRent *noleggio = noleggio->getIstance();

	testFriend(); //uso di friend

	testSlicing(); //funzione in cui mostro lo slicing


	char comando;

		do{
			cout << "Premere: " << endl;
			cout << "x -> Chiudere programma" << endl;
			cout << "1 -> Noleggio di un articolo" << endl;
			cout << "2 -> Restutizione di un articolo" << endl;
			cout << "3 -> Stampa attrezzature del negozio" << endl;
			cout << "4 -> Stampa tipologia sciatori" << endl;
			cout << "Inserire: ";
			cin >> comando;
			cout << "************************************" << endl;
			switch(comando){
							case '1':
								noleggio->noleggia();
								break;

							case '2':
								noleggio->restituzione();
								break;
							case '3':
								noleggio->stampa_attrezzatura();
								break;

							case '4':
								noleggio->stampa_clienti();
								break;
			}
		}while(comando != 'x');

		return 0;
}
