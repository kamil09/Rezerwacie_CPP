/*
 * PodMorska.h

 *
 *  Created on: 18 sty 2016
 *      Author: no-one
 */

#ifndef PODMORSKA_H_
#define PODMORSKA_H_

#include "Bilet.h"

class PodMorska : public Bilet{
public:
	PodMorska();
	virtual ~PodMorska();
	/*
	 * Metoda abstrakcyjna wypisująca dane informacje o podróży.
	 */
	void wypisz();
};

#endif /* PODMORSKA_H_ */
