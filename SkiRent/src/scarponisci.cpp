/*
 *  scarponisci.cpp
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */

#include "scarponisci.h"
#include "attrezzatura.h"
#include "cliente.h"
#include <iostream>
#include <string>
using namespace std;


scarponisci::scarponisci(string codiceprod,string modello,string marca, float pv, float prezzo, int n, int durezza)
	:attrezzatura(codiceprod,modello,marca, pv, prezzo){
	this->numero=n;
	this->durezza=durezza;
}

scarponisci::~scarponisci(){

}

void scarponisci::stampa(){
	attrezzatura::stampa();
	cout<<", Numero: " <<this->numero;
	cout<<", Durezza: " <<this->durezza;
	cout<<endl;
}



