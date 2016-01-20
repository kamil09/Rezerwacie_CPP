/*
 * BiletMnog.cpp
 *
 *  Created on: 20 sty 2016
 *      Author: no-one
 */

#include "BiletMnog.h"
#include <iostream>
#include <stdio.h>

BiletMnog::BiletMnog(int price, int time, int numer) :Bilet(price, time, numer) {
	// TODO Auto-generated constructor stub
}

BiletMnog::~BiletMnog() {
	// TODO Auto-generated destructor stub
}

void BiletMnog::wypisz(){
	puts("Podróż łączona");
}

