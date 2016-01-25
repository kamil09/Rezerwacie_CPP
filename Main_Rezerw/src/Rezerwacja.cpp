/*
 * Rezerwacja.cpp
 *
 *  Created on: 13 sty 2016
 *      Author: no-one
 */

#include "Rezerwacja.h"
#include "Bilet.h"
#include "Global.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

Rezerwacja::Rezerwacja(Bilet *bilet) {
	this->id=0;
	time_t timeD;
	struct tm * timeinfo;
	char buffer[80];
	time(&timeD);
	timeinfo = localtime(&timeD);
	strftime(buffer,80,"%d-%m-%Y_%I:%M:%S",timeinfo);
	std::string str(buffer);

	this->dataRezerwacji=str;

	this->bilet=bilet;
}
Rezerwacja::Rezerwacja() {
	this->id=0;
	this->bilet=NULL;
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
	if(this->bilet) this->bilet->wypisz();
	std::cout << "\n";
}

std::istream& operator>>(std::istream& is, Rezerwacja& s){
	is >> s.id;
	is >> s.dataRezerwacji;
	int numerBiletu;
	is >> numerBiletu;
	if(numerBiletu<listaBiletow.size())
		s.bilet=listaBiletow[numerBiletu-1];
	return is;
}
std::ostream& operator<<(std::ostream& os,  const Rezerwacja& s){
	os << s.id << std::endl;
	os << s.dataRezerwacji << std::endl;
	os << s.bilet->numer << std::endl;
	return os;
}

