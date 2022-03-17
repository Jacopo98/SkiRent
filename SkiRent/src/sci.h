/*
 * sci.h
 *
 *  Created on: 8 gen 2022
 *      Author: boffe
 */
#include "attrezzatura.h"
#include <string>
using namespace std;

#ifndef SCI_H_
#define SCI_H_

class sci: virtual public attrezzatura{
protected:
	float lunghezza;
	float raggio;
	string tipologia;

public:
	sci(string,string,string,float, float,float,float,string);
	virtual ~sci();
	void stampa();
};



#endif /* SCI_H_ */
