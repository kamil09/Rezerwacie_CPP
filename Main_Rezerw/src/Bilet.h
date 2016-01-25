/*
 * Podroz.h
 *
 *  Created on: 18 sty 2016
 *      Author: no-one
 */

#ifndef BILET_H_
#define BILET_H_

class Bilet {
public:
	/*
	 * Konstrulktor
	 */
	Bilet(int price, int czas, int numer);
	/*
	 * Destruktor
	 */
	virtual ~Bilet();
	/*
	 * Metoda abstrakcyjna wypisująca dane informacje o podróży.
	 */
	virtual void wypisz()=0;
	/*
	 * ID biletu
	 */
	int numer;
protected:
	/*
	 * Cena biletu
	 */
	int price;
	/*
	 * Czas podrózy
	 */
	int czasPodrozy;
};

#endif /* BILET_H_ */
