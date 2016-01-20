/*
 * PodMorska.cpp
 *
 *  Created on: 18 sty 2016
 *      Author: no-one
 */

#include "BiletStat.h"

#include <stdio.h>
#include <stdlib.h>

BiletStat::BiletStat(int price, int time, int numer) :Bilet(price, time,numer ){

}

BiletStat::~BiletStat() {
}
void BiletStat::wypisz(){
	puts("Podróż Morska");
}

