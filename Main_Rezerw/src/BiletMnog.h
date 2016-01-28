/*
 * BiletMnog.h
 *
 *  Created on: 20 sty 2016
 *      Author: no-one
 */

#ifndef BILETMNOG_H_
#define BILETMNOG_H_
#include "Bilet.h"
#include <cstdio>
#include <vector>
#include <iostream>

class BiletMnog : public Bilet{
public:
	BiletMnog(int price, int time, int numer, std::vector<Bilet*> lista);
	virtual ~BiletMnog();
	void wypisz();

	std::vector <Bilet*> lista;
};

#endif /* BILETMNOG_H_ */
