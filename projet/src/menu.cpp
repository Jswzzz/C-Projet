/*
 * menu.cpp
 *
 *  Created on: 14 avr. 2017
 *      Author: ytang01
 */

#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

void menu::AfficherMenu() {
	cout<<" ______________________"<<endl;
	cout<<"|                      |"<<"                 /*\\"<<endl;
	cout<<"|  1.Nouveau Jeu       |"<<"                 \\_/"<<endl;
	cout<<"|______________________|"<<"                  $"<<endl;
	cout<<" ______________________"<<"                   $"<<endl;
	cout<<"|                      |"<<"                  $"<<endl;
	cout<<"|  2.Paramètres        |"<<"                  $"<<endl;
	cout<<"|______________________|"<<"                  $"<<endl;
	cout<<" ______________________"<<"                   $"<<endl;
	cout<<"|                      |"<<"                  $"<<endl;
	cout<<"|  3.Règle             |"<<"                  "<<endl;
	cout<<"|______________________|"<<endl;

}

void menu::AfficherRegle(){
	cout<<"Règle : "<<endl;
	cout<<endl;
	cout<<"Le but du jeu est de soit ne pas prendre la dernière allumette, soit essayer de "<<endl;
	cout<<"prendre la dernière allumette. Ce jeu se joue à deux. Les joueurs sont devant un "<<endl;
	cout<<"certain nombre d'allumettes (qui peut varier d'une partie à l'autre). A chaque tour, "<<endl;
	cout<<"il faut en enlever 1, 2 ou 3. Celui qui prend la dernière gagne ou perd suivant les"<<endl;
	cout<<"versions."<<endl;
}

void menu::Option(int c){
	bool rejouer=true;
	char commande;
	Jeu leJeu;
	Machine m;
	if(c==1) {
		leJeu.AjouterJoueur(m);
		leJeu.AjouterJoueur();

	}
	else if (c==2){
		leJeu.AjouterJoueur();
		leJeu.AjouterJoueur();
	}

	while(rejouer==true){
		leJeu.Jouer();
		leJeu.AfficherResultat();
		cout<<"Vous voulez rejouer? O/N"<<endl;
		cin>>commande;
		if (commande=='N') rejouer=false;
	}
}

int menu::Parametre(){
	int nb=0;
	cout<<"Paramètre :"<<endl;
	cout<<endl;
	do{
		cout<<"Combien d'allumette voulez-vous jouer ? (>21) ";
		cin>>nb;
		if (nb<21) cout<<"Le nombre d'allumette doit être supérieur à 21. "<<endl;
		if (nb>60) cout<<"Le nombre est trop grand ! Il doit être inférieur à 60."<<endl;

	}while ((nb<21)||(nb>60));
	return nb;
}

int main(){
	int choix;
	menu me;
	Allumette al;
	me.AfficherMenu();
	cout<<endl;
	cout<<endl;
	cout<<"Saisissez voutre choix : ";
	cin>>choix;

	if (choix==3) me.AfficherRegle();
	else if (choix==2)
		al.setnb(me.Parametre());

}
