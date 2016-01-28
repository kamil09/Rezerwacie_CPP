/*
 * PodMorska.cpp
 *
 *  Created on: 18 sty 2016
 *      Author: no-one
 */

#include "BiletStat.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

BiletStat::BiletStat(int price, int time, int numer,std::string A, std::string B, std::string kap) :Bilet(price, time,numer ){
	this->port1=A;
	this->port2=B;
	this->kapitan=kap;
}

BiletStat::~BiletStat() {
}
void BiletStat::wypisz(){
	std::cout << "Typ: Podróż Morska "
			  << "Numer: "
			  << this->numer
			  << " Cena: "
			  << this->price
			  << " Czas podróży: "
			  << this->czasPodrozy
			  << " Port A: "
			  << this->port1
			  << " Port B: "
			  << this->port2
			  << " Kapitan: "
			  << this->kapitan;
}

