/*
 * Jeu.h
 *
 *  Created on: 28 avr. 2017
 *      Author: ytang01
 */

#ifndef JEU_H_
#define JEU_H_

class Jeu{
public:
	void init(int,int);
	bool win();
	void jouer();
	void AfficherResultat();
	void AjouterJoueur();

private:
	Allumette allumette;
	menu leMenu;
	Joueur *joueur[2];
};


#endif /* JEU_H_ */
