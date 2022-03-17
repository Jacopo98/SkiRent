/*
 *  cliente.cpp
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */

#include <string>
#include <iostream>
#include "cliente.h"
using namespace std;

static int clienti = 0;

cliente::cliente(int id, string tipo, string desc){
	this->id=id;
	this->tipo=tipo;
	this->descrizione=desc;
	clienti++;
}

cliente::~cliente(){

}

void cliente::stampa(){
	cout<<"ID: " <<this->id;
	cout<<" Tipo: "<<this->tipo;
	cout<<" (" <<this->descrizione <<")";
	cout << endl;
}

int cliente::getTipo(){
	return this->id;
}

