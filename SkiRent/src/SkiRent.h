/*
 *  SkiRent.h
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 *
 */

#include <string>
#include "attrezzatura.h"
#include "cliente.h"
#include "scarponisci.h"
#include "sci.h"
#include "freestylesci.h"
#include "minisci.h"
//#include "minisci.h"
using namespace std;


#ifndef SKIRENT_H_
#define SKIRENT_H_


class SkiRent{
private:
	attrezzatura * attrezzature[10];
	cliente * clienti[3];
	int n_attrezzature;
	int n_clienti;

	int articolo;
	int tiposciatore;
	int giorni;

	void popola();

	static SkiRent * istance;

	SkiRent(); //costruttore privato

public:
	void stampa_attrezzatura();
	void stampa_clienti();
	void noleggia();
	void restituzione();
	void test();
	static SkiRent * getIstance();
	virtual ~SkiRent();

};


#endif /* SKIRENT_H_ */
