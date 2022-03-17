/*
 *  attrezzatura.cpp
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */
#include <ctime>
#include <string>
#include "attrezzatura.h"
#include "cliente.h"
#include <iostream>
using namespace std;

static int attrezzature = 0;

attrezzatura::attrezzatura(string cod,string mod,string marca, float pv, float prez){
	this->codiceprod=cod;
	this->modello=mod;
	this->marca=marca;
	this->prezzo=prez;
	this->PV = pv;

	this->c = NULL;
	this->occupato=false;
}

attrezzatura::~attrezzatura(){
	delete(this->c);
}

void attrezzatura::noleggio(cliente* c, int giorni){

	if(this->occupato==false){
		this->occupato=true;
		this->c=c;
		this->giorninoleggio=giorni;
	}else
		cout<<"Già noleggiato"<<endl;
}

void attrezzatura::riconsegna(){
	if(this->occupato){
		cout<<"Attrezzatura libera"<<endl;
		cout<<"Totale da pagare: "<< this->getPrezzo() << endl;
		this->occupato=false;
		this->giorninoleggio=0;
	}else
		cout<<"Attrettatura non noleggiata"<<endl;
}

float attrezzatura::getPrezzo(){

	float prezzo =  this->prezzo * this->giorninoleggio;
	if(c->getTipo()==0){ //caso junior #TODO: da gestire con switch case
		return prezzo = prezzo - (prezzo*30/100);
	}
	if(c->getTipo()==1){//caso adulto
		return prezzo;
	}
	if(c->getTipo()==2){//caso senior
		return prezzo = prezzo - (prezzo*15/100);
	}
}

float attrezzatura::getPV(){
	return this->PV;
}


void attrezzatura::stampa(){
	if(this->occupato==false){
		cout<<" (Disponibile)";
	}else{
		cout<<" (NON Disponibile)";
	}
	cout<<" ID: "<<this->codiceprod;
	cout<<", Modello: "<<this->modello;
	cout<<", Marca: "<<this->marca;
	cout<<", Prezzo: "<<this->prezzo;
}
