/*
 * Jeu.cpp
 *
 *  Created on: 14 avr. 2017
 *      Author: ytang01
 */

#include <iostream>
#include "Jeu.h"
using namespace std;

void Jeu::init(int nbAl,int maxi){
	nbAl=21;
	maxi=3;
	Allumette(nbAl,maxi);
}

bool Jeu::win(){
	Allumette al;
	if (al.getnb()==0)
		return true;
	else
		return false;
}
void Jeu::jouer(){
	int nb;
	int nbAllumette=allumette.getnb();
	while(nbAllumette>0) {
		allumette.draw(nbAllumette);
		if (joueur[2]->getActuel()){
		if (!joueur[2]->JoueurActuel()){
			joueur[2]->retirer();
		}
			else{
				cout<< "Vous voulez retirer combien d'allumettes?"<<endl;
				cin>>nb;
				joueur[2]->retirer(nb);
			}
		if (win()) {
			joueur[1]->gagner();
			cout<<joueur[1]->getNom()<<"a gagné!"<<endl;
		}
			else{
				cout<<"Il reste "<<allumette.getnb()<<"allumettes"<<endl;
				joueur[1]->setActuel(true);
				joueur[2]->setActuel(false);
			}
		}
		else {
			cout<<"Vous voulez retirer combien d'allumettes?"<<endl;
			cin>>nb;
			joueur[1]->retirer(nb);

			if (win()) {
				joueur[2]->gagner();
				cout<<joueur[2]->getNom()<<"a gagné!"<<endl;
			}
			else{
				cout<<"Il reste "<<allumette.getnb()<<"allumettes"<<endl;
				joueur[2]->setActuel(true);
				joueur[1]->setActuel(false);
			}
		}
		}
}
void Jeu::AfficherResultat(){
	cout<<joueur[1]->getNom()<<" : "<<joueur[1]->getScore()<<endl;
	cout<<joueur[2]->getNom()<<" : "<<joueur[2]->getScore()<<endl;
}


void Jeu::AjouterJoueur(){
	char* nom1;
	char* nom2;
	cout<<"Joueur 1 inserez votre nom: "<<endl;
	cin>>nom1;
	joueur[1]->setNom(nom1);
	cout<<"Joueur 2 inserez votre nom: "<<endl;
	cin>>nom2;
	joueur[2]->setNom(nom2);

}




