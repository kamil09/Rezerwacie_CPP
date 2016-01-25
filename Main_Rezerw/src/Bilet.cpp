/*
 * Podroz.cpp
 *
 *  Created on: 18 sty 2016
 *      Author: no-one
 */

#include "Bilet.h"


Bilet::Bilet(int price, int czas, int numer){
	this->price=price;
	this->czasPodrozy=czas;
	this->numer=numer;
}

Bilet::~Bilet() {
}
