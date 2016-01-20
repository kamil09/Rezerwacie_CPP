#include <cstdio>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

template <class T> class Baza{
public:
	/**
	 * Konstruktor
	 */
	Baza() {
		this->id=0;
		odczytBazy();
		//OD jakiego ID zaczynamy generator
		for(int i=0; i< lista.size() ; i++)
			if(lista[i].id > this->id)
				this->id = lista[i].id;
	}
	/**
	 * Destruktor
	 */
	~Baza() {
		lista.clear();
	}
	void operator+=(T bilet){
		//DODANIE BILETU
		this->lista.add(bilet.id=this->IDgen());
		zapisBazy();
	}
	//Usuwanie z bazy
	void operator-=(int del){
		int i=0;
		for(i=0; i< lista.size() ; i++)
			if(!lista[i].compare(del)){
				cout << "Rezerwacja o ID: "+lista[i].id+" została usunięta!\n";
				lista.erase(lista.begin()+i);
				break;
			}
		if(i == lista.size() )
			cout << "Nie znaleziono rezerwacji o takim numerze!\n";
		else
			zapisBazy();
	}
	//Wyswietlanie
	void wyswietl(){
		cout << "\n REZERWACJE: \n\n";
		for(int i=0; i< lista.size() ; i++ )
			lista[i].wypisz();
		cout << "\n";
	}
	//Generator ID
	int IDgen(){
		return ++id;
	}
private:
	/**
	 * Do generowania id obiektów
	 */
	int id;
	/**
	 * Wektor bazy danych zaszej rezerwacji
	 */
	vector <T> lista;
	//SERIALIZACJA
	void zapisBazy(){
		ofstream fileW;
		fileW.open("data.boom", ios::binary);
		fileW << lista;
		fileW.close();
	}
	void odczytBazy(){
		ifstream fileR;
		fileR.open("data.boom", ios::binary);
		//fileR >> lista;
		fileR.close();
	}

};


