/*
 * PodMorska.h

 *
 *  Created on: 18 sty 2016
 *      Author: no-one
 */

#ifndef BILETSTAT_H_
#define BILETSTAT_H_

#include "Bilet.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class BiletStat : public Bilet{
private:
	std::string port1;
	std::string port2;
	std::string kapitan;
public:
	BiletStat(int price, int time, int numer,std::string A, std::string B, std::string kap);
	virtual ~BiletStat();
	/*
	 * Metoda wypisująca dane informacje o podróży.
	 */
	void wypisz();
};

#endif /* BILETSTAT_H_ */
