#include <cstdio>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <fstream>


using namespace std;

template <class T> class Baza{
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
		fileW << lista.size() << endl;
		for (int i =0 ; i< lista.size(); i++)
			fileW << lista[i] << endl;
		fileW.close();
	}
	void odczytBazy(){
		ifstream fileR;
		fileR.open("data.boom", ios::binary);
		int sizeL=0;
		fileR >> sizeL;
		for (int i =0 ; i< sizeL ; i++)
		{
			T r;
			fileR >> r;
			lista.push_back(r);
		}
		fileR.close();
	}

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
	Baza& operator+=(T *rez){
		//DODANIE BILETU
		rez->id=this->IDgen();
		lista.push_back(*rez);
		zapisBazy();
		cout << "Rezerwacja io ID:" << rez->id << " dodana pomyślnie do bazy";
		return *this;
	}
	//Usuwanie z bazy
	void operator-=(int del){
		int i=0;
		for(i=0; i< lista.size() ; i++)
			if(!lista[i].compare(del)){
				cout << "Rezerwacja o ID: " << lista[i].id << " została usunięta!\n";
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
		for(int i=0; i< lista.size() ; i++ ){
			lista[i].wypisz();
		}
		cout << "\n";
	}
	//Generator ID
	int IDgen(){
		return ++id;
	}
};


