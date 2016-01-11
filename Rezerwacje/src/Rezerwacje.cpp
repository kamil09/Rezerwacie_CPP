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
using namespace std;

int main() {

	cout << "Witaj w biurze podróży 'Pod Mostem' ";
	cout << "Jest nam niezmiernie miło, że zdecydowałeś się wybrać naszą ofertę";

	string inCommand;

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
		else if (!inCommand.compare("addR"))
			break;
		else if (!inCommand.compare("delR"))
			break;
		else
			cout << "Musiałeś się pomylić, spróbuj raz jeszcze!\n";

	}
	cout << "Dziękujemy za skorzystanie z naszych usług.\n";
	return 0;
}
