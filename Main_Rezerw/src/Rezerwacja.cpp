/*
 * Rezerwacja.cpp
 *
 *  Created on: 13 sty 2016
 *      Author: no-one
 */

#include "Rezerwacja.h"
#include <iostream>
#include <stdio.h>

Rezerwacja::Rezerwacja(int id) {
	this ->id=id;

}

Rezerwacja::~Rezerwacja() {
	// TODO Auto-generated destructor stub
}

int Rezerwacja::compare(int x){
	if(x == this->id ) return 0;
	else return 1;
}

void Rezerwacja::wypisz(){
	std::cout << "ID: " << this->id << ", data Rezerwacji: " << dataRezerwacji << ", Rodzaj podróży: NNN \n";
}

