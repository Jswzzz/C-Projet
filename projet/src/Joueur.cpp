/*
 * Joueur.cpp
 *
 *  Created on: 28 avr. 2017
 *      Author: ytang01
 */

#include <iostream>;
using namespace std;

class Joueur{

public:
	void gagner(){
		record+=1;
	}
	int getScore(){
		return record;
	}
	//bool JoueurReel();
	char* getNom();
	//void setNom(char* nom);
	bool getActuel(){
		return joueurActuel;
	}
	void setActuel(bool act){
			joueurActuel=act;
	}

private:
	 char* nom;
	 int record;
	 bool joueurActuel;

};

class Humain:public Joueur{
public:
	void retirer(int nb){
		Allumette al;
		int nbAncien=al.getnb();
		al.draw(nbAncien-nb);
		al.setnb(nbAncien-nb);
	}

	bool JoueurReel(){
		return true;
	}
	char* getNom(){
		return nom;
	}
	void setNom(char* n){
		nom=n;
	}
};

class Machine:public Joueur{
public:
	void retirer(){
		Allumette al;
		int nbAncien=al.getnb();
		int nb=AI(nbAncien,3);
		al.draw(nbAncien-nb);
		al.setnb(nbAncien-nb);
	}

	int AI(int reste, int max){
		int dividende=max+1;
		if (reste % dividende==1)
			return 1;
		else if (reste % dividende==0)
			return max;
		else return (reste % dividende)-1;
	}

	bool JoueurReel(){
			return false;
		}

	char* getNom(){
			return "Machine";
		}
};
