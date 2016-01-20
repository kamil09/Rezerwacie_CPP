/*
 * Rezerwacja.cpp
 *
 *  Created on: 13 sty 2016
 *      Author: no-one
 */

#include "Rezerwacja.h"
#include <iostream>
#include <stdio.h>
#include <ctime>

Rezerwacja::Rezerwacja(Bilet *bilet) {
	time_t timeD;
	struct tm * timeinfo;
	char buffer[80];
	time(&timeD);
	timeinfo = localtime(&timeD);
	strftime(buffer,80,"%d-%m-%Y %I:%M:%S",timeinfo);
	std::string str(buffer);

	this->dataRezerwacji=str;
	this->bilet=bilet;
}
Rezerwacja::~Rezerwacja() {
	// TODO Auto-generated destructor stub
}
int Rezerwacja::compare(int x){
	if(x == this->id ) return 0;
	else return 1;
}
void Rezerwacja::wypisz(){
	std::cout << "ID: " << this->id << ", data Rezerwacji: " << this->dataRezerwacji << ", Bilet:";
	this->bilet->wypisz();
	std::cout << "\n";
}

