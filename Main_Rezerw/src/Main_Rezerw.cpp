//============================================================================
// Name        : Rezerwacje.cpp
// Author      : Kamil Piotrowski
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Baza.cpp"
#include "Bilet.h"
#include "BiletStat.h"
#include "BiletSamo.h"
#include "Rezerwacja.h"

using namespace std;

vector <Bilet*> generujBilety(vector <Bilet*> listaBiletow){
	for(int i=0; i<25; i++){
		if(i<10){
			listaBiletow.push_back(new BiletSamo(rand()%100 + 30, rand()%1000+ 1000,i));
		}
		else if(i<20){
			listaBiletow.push_back(new BiletSamo(rand()%150+ 50,rand()%2000+ 1000,i));
		}
		else{
			listaBiletow.push_back(new BiletSamo(rand()%200+ 80,rand()%3000+ 1000,i));
		}
	}
	return listaBiletow;
}
void wypiszBilety(vector <Bilet*> listaBiletow){
	for(unsigned int i=0; i < listaBiletow.size() ; i++ ){
		listaBiletow[i]->wypisz();
	}

}

int main() {


	Baza < Rezerwacja >* baza = new Baza < Rezerwacja >;
	vector <Bilet*> listaBiletow;
	string inCommand;
	srand (time(NULL));
	listaBiletow=generujBilety(listaBiletow);

	cout << "Witaj w biurze podróży 'Pod Mostem' ";
	cout << "Jest nam niezmiernie miło, że zdecydowałeś się wybrać naszą ofertę";



	/*
	 * Główna pętla programu
	 */
	while(1){
		cout << "\n*** Witaj, co masz ochotę zrobić? ***\n";
		cout << "   -> exit : wyjście z programu\n";
		cout << "   -> delR : usuwa rezerwację\n";
		cout << "   -> addR : dodaje rezerwację\n";
		cout << "   -> showAll : pokazuje wszystkie rezerwacje\n\n";
		cin >> inCommand;

		if (!inCommand.compare("exit"))
			break;
		else if (!inCommand.compare("showAll"))
			break;
		else if (!inCommand.compare("addR")){
			wypiszBilety(listaBiletow);
		}
		else if (!inCommand.compare("delR"))
			break;
		else
			cout << "Musiałeś się pomylić, spróbuj raz jeszcze!\n";

	}
	cout << "Dziękujemy za skorzystanie z naszych usług.\n";
	return 0;
}
