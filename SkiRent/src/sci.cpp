/*
 *  sci.cpp
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */

#include "sci.h"
#include "attrezzatura.h"
#include "cliente.h"
#include <iostream>
#include <string>
using namespace std;


sci::sci(string codiceprod,string modello,string marca, float pv, float prezzo, float l, float r, string tipologia)
	:attrezzatura(codiceprod,modello,marca,pv, prezzo){
	this->lunghezza=l;
	this->raggio=r;
	this->tipologia=tipologia;
}

sci::~sci(){

}

void sci::stampa(){
	attrezzatura::stampa();
	cout<<", Lunghezza: " <<this->lunghezza;
	cout<<", Raggio: " <<this->raggio;
	cout<<", Tipologia: " <<this->tipologia;
	cout<<endl;
}
