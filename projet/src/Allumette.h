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
	void draw(int);
	Allumette(int,int);
	int getnb();
	void setnb(int);
private:
	int nbrAllumetteActuel;
	static int max;
};



#endif /* ALLUMETTE_H_ */
