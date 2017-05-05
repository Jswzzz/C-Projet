/*
 * Joueur.h
 *
 *  Created on: 28 avr. 2017
 *      Author: ytang01
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

class Joueur{
public:
	void gagner();
	int  getScore();
	char* getNom();
	bool getActuel();
	void setActuel(bool);
	void retirer(int);
	void retirer();
	void setNom(char*);

private:
	 char* nom;
	 int record;
	 bool JoueurActuel;
};

class Humain:public Joueur{
public:
	void retirer(int);
	bool JoueurReel();
	char* getNom();
	void setNom(char*);
};

class Machine:public Joueur{
public:
	void retirer();
	int Al(int,int);
	bool JoueurReel();
	char* getNom();
};




#endif /* JOUEUR_H_ */
