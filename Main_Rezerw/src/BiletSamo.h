/*
 * BiletSamo.h
 *
 *  Created on: 20 sty 2016
 *      Author: no-one
 */

#ifndef BILETSAMO_H_
#define BILETSAMO_H_

#include "Bilet.h"

class BiletSamo : public Bilet{
public:
	BiletSamo(int price, int time, int numer);
	virtual ~BiletSamo();
	/*
	 * Metoda wypisująca dane informacje o podróży.
	 */
	void wypisz();
};

#endif /* BILETSAMO_H_ */
