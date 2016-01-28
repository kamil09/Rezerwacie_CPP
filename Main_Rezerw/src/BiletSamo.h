/*
 * BiletSamo.h
 *
 *  Created on: 20 sty 2016
 *      Author: no-one
 */

#ifndef BILETSAMO_H_
#define BILETSAMO_H_

#include "Bilet.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class BiletSamo : public Bilet{
private:
	std::string miastoA;
	std::string miastoB;
public:
	BiletSamo(int price, int time, int numer, std::string A, std::string B);
	virtual ~BiletSamo();
	/*
	 * Metoda wypisująca dane informacje o podróży.
	 */
	void wypisz();
};

#endif /* BILETSAMO_H_ */
