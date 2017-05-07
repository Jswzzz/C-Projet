/*
 * Allumette.h
 *
 *  Created on: 14 avr. 2017
 *      Author: ytang01
 */

#ifndef ALLUMETTE_H_
#define ALLUMETTE_H_

class Allumette{
public:
//	Allumette();
	void draw(int);
	void allumette(int, int);
	int getnb();
	void setnb(int);
private:
	int nbrAllumetteActuel;
	int max;
};



#endif /* ALLUMETTE_H_ */
