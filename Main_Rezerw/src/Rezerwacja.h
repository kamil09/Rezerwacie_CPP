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

#ifndef REZERWACJA_H_
#define REZERWACJA_H_

class Rezerwacja {
public:
	//ID rezerwacji
	int id;
	//Data rezerwacji
	std::string dataRezerwacji;
	//Podróż:

	//Konstruktor
	Rezerwacja(int id);
	//Destruktor
	virtual ~Rezerwacja();

	int compare(int x);
	void wypisz();
};

#endif /* REZERWACJA_H_ */
