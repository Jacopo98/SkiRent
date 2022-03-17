/*
 *  sci.cpp
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */

#include "freestylesci.h"
#include "attrezzatura.h"
#include "cliente.h"
#include <iostream>
#include <string>
using namespace std;


freestylesci::freestylesci(string codiceprod,string modello,string marca, float pv, float prezzo, float l, float larg)
	:attrezzatura(codiceprod,modello,marca,pv, prezzo){
	this->lunghezza=l;
	this->larghezza=larg;
}

freestylesci::~freestylesci(){

}

void freestylesci::stampa(){
	attrezzatura::stampa();
	cout<<", Lunghezza: " <<this->lunghezza;
	cout<<", Larghezza: " <<this->larghezza;
	cout<<endl;
}
