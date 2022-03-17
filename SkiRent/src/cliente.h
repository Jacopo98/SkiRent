/*
 *  cliente.h
 *
 *  Created on: 8 gen 2022
 *  Author: Boffelli Jacopo
 */
#include <string>
using namespace std;
#include <memory>

#ifndef CLIENTE_H_
#define CLIENTE_H_


class cliente {
private:
	int id;
	string tipo;
	string descrizione;
public:
	cliente(string);
	cliente(int,string,string);
	virtual ~cliente();
	void stampa();
	int getTipo();

	friend string friendsGetField(shared_ptr <cliente> c);
};



#endif /* CLIENTE_H_ */
