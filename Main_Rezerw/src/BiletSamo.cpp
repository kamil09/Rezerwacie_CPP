/*
 * BiletSamo.cpp
 *
 *  Created on: 20 sty 2016
 *      Author: no-one
 */

#include "BiletSamo.h"
#include <iostream>
#include <stdio.h>

BiletSamo::BiletSamo(int price, int time, int numer, std::string A, std::string B) :Bilet(price, time, numer){
	// TODO Auto-generated constructor stub
	this->miastoA=A;
	this->miastoB=B;
}

BiletSamo::~BiletSamo() {
	// TODO Auto-generated destructor stub
}
void BiletSamo::wypisz(){
	std::cout << "Typ: Podróż Powietrzna "
			  << "Numer: "
			  << this->numer
			  << " Cena: "
			  << this->price
			  << " Czas podróży: "
			  << this->czasPodrozy
			  << " Lotnisko A: "
			  << this->miastoA
			  << " Lotnisko B: "
			  << this->miastoB;
}

