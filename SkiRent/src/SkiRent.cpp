//============================================================================
// Name        : SkiRent.cpp
// Author      : Jacopo Boffelli
// Version     : 1
// Copyright   : Your copyright notice
// Description : Ski Rent application (corso PA)
//============================================================================

#include <iostream>
using namespace std;
#include "attrezzatura.h"
#include "cliente.h"
#include "scarponisci.h"
#include "sci.h"
#include "freestylesci.h"
#include "minisci.h"
#include "SkiRent.h"
#include <memory>

#include <list>
#include <iterator>

SkiRent::SkiRent(){
	this->n_attrezzature=0;
	this->n_clienti=0;

	string articolo = "";
	string tiposciatore = "";
	string giorni = "";

	popola();

}

// Singleton
SkiRent * SkiRent::getIstance(){
	if (istance==0){
		istance = new SkiRent(); 	//creo SkiRent
	}
	return istance;
}

void SkiRent::popola(){
	attrezzatura* A1 = new sci("SKI1","Head Rebels","Head", 300 ,25.00, 180, 15,"Giant Slalom");
	attrezzatura* A2 = new sci("SKI2","Atomic redster","Atomic", 345, 20.00, 175, 14,"Special Slalom");
	attrezzatura* A3 = new sci("SKI3","Fischer RC4 WC","Fischer", 700, 22.00, 170, 14,"Race");
	attrezzatura* A4 = new sci("SKI4","Head SS","Head", 800, 19.00, 180, 15,"Race");
	attrezzatura* A5 = new scarponisci("SCA1","Head Rebels Boot","Head",700,10.00, 28, 130);
	attrezzatura* A6 = new scarponisci("SCA2","Fischer Boot","Fischer", 270, 10.00, 28, 110);
	attrezzatura* A7 = new scarponisci("SCA3","Rossignol Boot","Rossignol", 500, 10.00, 28, 90);
	attrezzatura* A8 = new scarponisci("SCA4","Head SS Boot","Head", 180, 10.00, 28, 150);
	attrezzatura* A9 = new freestylesci("FSKI","Head FreeRide","Head", 455, 10.00, 28, 150);
	attrezzatura* A10 = new minisci("MSKI","Mini Salomon FreeRide","Head", 390, 10.00, 28, 150, 2, 3, "FreeRide");

	list<float> lista1;

	lista1.push_front(A1->getPV());
	lista1.push_front(A2->getPV());
	lista1.push_front(A3->getPV());
	lista1.push_front(A4->getPV());
	lista1.push_front(A5->getPV());
	lista1.push_front(A6->getPV());
	lista1.push_front(A7->getPV());
	lista1.push_front(A8->getPV());
	lista1.push_front(A9->getPV());
	lista1.push_front(A10->getPV());

	list<float>::iterator it;
	float tot = 0;
	for (it = lista1.begin(); it != lista1.end(); it++){
		tot = tot + *it;
	}
	cout << "Valore complessivo attrezzatura: " << tot <<endl <<endl;

	this->attrezzature[0] = A1;
	this->attrezzature[1] = A2;
	this->attrezzature[2] = A3;
	this->attrezzature[3] = A4;
	this->attrezzature[4] = A5;
	this->attrezzature[5] = A6;
	this->attrezzature[6] = A7;
	this->attrezzature[7] = A8;
	this->attrezzature[8] = A9;
	this->attrezzature[9] = A10;
	this->n_attrezzature = 10;

	cliente *C1 = new cliente(0,"Junior","Sciatore con età inferiore o uguale a 16 anni");
	cliente *C2 = new cliente(1,"Adulto", "Sciatore di età maggiore di 16 anni e inferiore a 60");
	cliente *C3 = new cliente(2,"Senior","Sciatore con età di almeno 60 anni compiuti");

	this->clienti[0] = C1;
	this->clienti[1] = C2;
	this->clienti[2] = C3;
	this->n_clienti = 3;
}

void SkiRent::stampa_attrezzatura(){
	for(int i = 0; i<this->n_attrezzature;i++){
		cout<<i << " -->";
		this->attrezzature[i]->stampa();
	}
	cout<<"************************************"<<endl;
}

void SkiRent::stampa_clienti(){
	for(int i = 0; i<this->n_clienti;i++){
			cout<<i << " -->";
			this->clienti[i]->stampa();
	}
	cout<<"************************************"<<endl;
}

void SkiRent::noleggia(){
	articolo = NULL;
	tiposciatore = 1; //default 1 (adulto) opzione piu costosa
	giorni = NULL;

	do {
		for(int i = 0;i<n_attrezzature; i++){
			cout<<i <<"--->";
			attrezzature[i]->stampa();
		}
		cout<< "Inserisci il codice dell'attrezzatura: ";
		cin>>articolo;
	} while (articolo<0 || articolo > n_attrezzature);
	cout << endl;

	do{
		for(int i = 0; i < n_clienti; i++){
			cout << i << " ---> ";
			clienti[i]->stampa();
			cout << endl;
		}
		cout << "Inserisci il tipo di sciatore: "; //Inserimento numero della persona dall'elenco
		cin >> tiposciatore;
	} while(tiposciatore < 0 || tiposciatore > n_clienti);

	do{
		cout << "Inserisci il numero di giorni di noleggio: ";
		cin >> giorni;
	}while(giorni<1);

	attrezzature[articolo]-> noleggio(clienti[tiposciatore],giorni);

	cout << "************************************"<<endl;

}

void SkiRent::restituzione(){
	articolo = NULL;
	tiposciatore = 1; //default 1 (adulto) opzione piu costosa
	giorni = NULL;

	do {
		for(int i = 0;i<n_attrezzature; i++){
			cout<<i <<"--->";
			attrezzature[i]->stampa();
		}
		cout<< "Inserisci il codice dell'attrezzatura: ";
		cin>>articolo;
	} while (articolo<0 || articolo > n_attrezzature);

	attrezzature[articolo]->riconsegna();

	cout<<"************************************"<<endl;
}

void SkiRent::test(){
	cout << "Attrezzature disponibili al noleggio: " << endl;
	this->stampa_attrezzatura();

	cout << "Noleggio di 3 attrezzature" << endl;
	this->attrezzature[0]->noleggio(clienti[0],10);
	this->attrezzature[2]->noleggio(clienti[1],8);
	this->attrezzature[4]->noleggio(clienti[2],15);
	this->stampa_attrezzatura();

	cout<<"Riconsegna di un articolo"<<endl;
	this->attrezzature[0]->riconsegna();
	this->stampa_attrezzatura();

	cout<<"Riconsegna di tutti gli altri articoli"<<endl;
	this->attrezzature[2]->riconsegna();
	this->attrezzature[4]->riconsegna();
	this->stampa_attrezzatura();

}

SkiRent::~SkiRent(){

}




