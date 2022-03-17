/*
 *  freestylesci.h
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */
#include "attrezzatura.h"
#include "sci.h"
#include "freestylesci.h"
#include <string>
using namespace std;

#ifndef MINISCI_H_
#define MINISCI_H_

class minisci:  public sci, public freestylesci{
private:
	float peso;

public:
	minisci(string,string,string, float,float,float,float,float, float, string);
	virtual ~minisci();
	void stampa();
};



#endif /* MINISCI_H_ */
