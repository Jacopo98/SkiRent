#include <iostream>
#include <string>
using namespace std;
#include "cliente.h"

#ifndef ATTREZZATURA_H_
#define ATTREZZATURA_H_

class attrezzatura {
protected: //visibili solo nella classe e sottoclassi
	int id;
	string codiceprod;
	string modello;
	string marca;
	float prezzo;
	bool occupato;
	int giorninoleggio;
	cliente *c;
	float PV; //prezzovendita

public:
	attrezzatura(string,string,string,float, float);
	virtual ~attrezzatura();
	void noleggio(cliente*, int);
	void riconsegna();
	float getPrezzo();
	float getPV();
	virtual void stampa();

};

#endif /* ATTREZZATURA_H_ */
