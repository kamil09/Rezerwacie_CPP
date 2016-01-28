/*
 * Rezerwacja.h
 *
 *  Created on: 13 sty 2016
 *      Author: Kamil Piotrowski
 */
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Bilet.h"
#include <fstream>

#ifndef REZERWACJA_H_
#define REZERWACJA_H_

class Rezerwacja {
public:
	//ID rezerwacji
	int id;
	//Data rezerwacji
	std::string dataRezerwacji;
	//Podróż:
	Bilet *bilet;
	//Konstruktor
	Rezerwacja(Bilet *bilet);
	Rezerwacja();
	//Destruktor
	virtual ~Rezerwacja();

	int compare(int x);
	void wypisz();

};

std::istream& operator>>(std::istream& is, Rezerwacja& s);
std::ostream& operator<<(std::ostream& os, const Rezerwacja& s);


#endif /* REZERWACJA_H_ */
