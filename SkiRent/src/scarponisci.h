/*
 *  scarponisci.h
 *
 *  Created on: 8 gen 2022
 *  Author: boffelli jacopo
 */
#include "attrezzatura.h"
#include <string>
using namespace std;

#ifndef SCARPONISCI_H_
#define SCARPONISCI_H_

class scarponisci: public attrezzatura{
private:
	int numero;
	int durezza;

public:
	scarponisci(string,string,string,float, float,int,int);
	virtual ~scarponisci();
	void stampa();
};



#endif /* SCARPONISCI_H_ */
