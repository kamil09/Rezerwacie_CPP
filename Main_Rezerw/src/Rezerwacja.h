/*
 * Rezerwacja.h
 *
 *  Created on: 13 sty 2016
 *      Author: no-one
 */
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Bilet.h"

#ifndef REZERWACJA_H_
#define REZERWACJA_H_

class Rezerwacja {
public:
	//ID rezerwacji
	int id=0;
	//Data rezerwacji
	std::string dataRezerwacji;
	//Podróż:
	Bilet *bilet;
	//Konstruktor
	Rezerwacja(Bilet *bilet);
	//Destruktor
	virtual ~Rezerwacja();

	int compare(int x);
	void wypisz();
};

#endif /* REZERWACJA_H_ */
