/*
 * Allumette.cpp
 *
 *  Created on: 14 avr. 2017
 *      Author: ytang01
 */


#include <iostream>
#include <string>
#include "Allumette.h"
using namespace std;

Allumette::Allumette(int nbA,int maximum){
	nbrAllumetteActuel=nbA;
	max=maximum;
}

void Allumette::draw(int nbrAllumetteActuel){
	for (int i=0; i<nbrAllumetteActuel;i++){
	cout<<"O  ";

	}
	cout<<endl;
	for (int i=0; i<nbrAllumetteActuel;i++){
		cout<<"|  ";
	}
	cout<<endl;
	for (int i=0; i<nbrAllumetteActuel;i++){
			cout<<"|  ";
	}
	cout<<endl;
	for (int i=0; i<nbrAllumetteActuel;i++){
		if (i<9) cout<<i+1<<"  ";
		else cout<<i+1<<" ";

	}
}

int Allumette::getnb(){
	return nbrAllumetteActuel;
}

void Allumette::setnb(int nb){
	nbrAllumetteActuel=nb;
}

/**int main(){
	Allumette a= new Allumette(21,3);
	a.draw(5);
	return 0;
}**/

