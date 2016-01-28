/*
 * BiletMnog.cpp
 *
 *  Created on: 20 sty 2016
 *      Author: no-one
 */

#include "BiletMnog.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Bilet.h"

BiletMnog::BiletMnog(int price, int time, int numer, std::vector<Bilet*> lista) :Bilet(price, time, numer) {
	// TODO Auto-generated constructor stub
	this->lista=lista;
}

BiletMnog::~BiletMnog() {
	// TODO Auto-generated destructor stub
}

void BiletMnog::wypisz(){
	std::cout << "Typ: Podróż Łączona " << "Numer: " << this->numer << " Cena: " << this->price << " Czas podróży: " << this->czasPodrozy;
	std::cout << " Numery biletów składowych: ";
	for(int i=0; i<this->lista.size(); i++){
		std::cout << this->lista[i]->numer << ", ";
	}
}

