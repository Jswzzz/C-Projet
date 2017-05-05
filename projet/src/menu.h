/*
 * menu.h
 *
 *  Created on: 14 avr. 2017
 *      Author: ytang01
 */

#ifndef MENU_H_
#define MENU_H_

class menu{
public:
	menu();
	void AfficherMenu();
	void AfficherRegle();
	void Option(int);
	int Parametre();

private:
	Jeu leJeu;
};



#endif /* MENU_H_ */
