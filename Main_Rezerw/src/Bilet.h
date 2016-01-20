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
	Bilet();
	/*
	 * Destruktor
	 */
	virtual ~Bilet();
	/*
	 * Metoda abstrakcyjna wypisująca dane informacje o podróży.
	 */
	virtual void wypisz()=0;
};

#endif /* BILET_H_ */
