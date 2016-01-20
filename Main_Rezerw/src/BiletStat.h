/*
 * PodMorska.h

 *
 *  Created on: 18 sty 2016
 *      Author: no-one
 */

#ifndef BILETSTAT_H_
#define BILETSTAT_H_

#include "Bilet.h"

class BiletStat : public Bilet{
public:
	BiletStat(int price, int time, int numer);
	virtual ~BiletStat();
	/*
	 * Metoda wypisująca dane informacje o podróży.
	 */
	void wypisz();
};

#endif /* BILETSTAT_H_ */
