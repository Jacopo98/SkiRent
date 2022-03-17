/*
 *  scarponisci.cpp
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */

#include "minisci.h"
#include "attrezzatura.h"
#include "cliente.h"
#include <iostream>
#include <string>
using namespace std;


minisci::minisci(string codiceprod,string modello,string marca, float pv, float prezzo, float r, float l, float larg, float peso, string tipologia)
	:freestylesci(codiceprod, modello, marca, pv,  prezzo,  l,  larg), sci(codiceprod, modello, marca, pv,  prezzo,  l,  r, tipologia),
	 attrezzatura(codiceprod,modello,marca,pv, prezzo){
	this->peso = peso;
}

minisci::~minisci(){

}

void minisci::stampa(){
	attrezzatura::stampa();
	cout<<", Raggio: " <<this->raggio;
	cout<<", Lunghezza: " <<this->sci::lunghezza;
	cout<<", Larghezza: " <<this->larghezza;
	cout<<", Peso: " <<this->peso;
	cout<<", Tipo: " <<this->tipologia;
	cout<<endl;
}



