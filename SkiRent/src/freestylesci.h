/*
 *  freestylesci.h
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */
#include "attrezzatura.h"
#include <string>
using namespace std;

#ifndef FREESTYLESCI_H_
#define FREESTYLESCI_H_

class freestylesci: virtual public attrezzatura{
protected:
	float lunghezza;
	float larghezza;

public:
	freestylesci(string,string,string,float, float,float,float);
	virtual ~freestylesci();
	void stampa();
};



#endif /* FREESTYLESCI_H_ */
