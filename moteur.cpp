#include "moteur.h"
#include <iostream>

Cmoteur::Cmoteur()
{
	cylindree = 1.2l;
	puissance = 75;
	typeCarburant = "essence";
	enMarche = false;
	regime = 0;

Cmoteur::Cmoteur(float _cylindree, int _puissance, std::string _typeCarburant, bool _enMarche, int _regime);
	cylindree = _cylindree;
	puissance = _puissance;
	typeCarburant = _typeCarburant;
	enMarche = false;
	regime = 0;
	Cmoteur::~Cmoteur() { //destructeur

}
	void Cmoteur::demarer() {

		enMarche = true
		regime = 900 //au ralenti

		cout << "la voiture est demarer" << endl;
	}
	void Cmoteur::arrete() {

		enMarche = False
			regime = 0
			cout << "la voiture est eteint";
	}
	void Cmoteur::accelerer(trmin) {

		vitesse += valeur;
		regime += trmin;
		if (regime > 6500)
			regime = 6500 //limite maximale de trmin
		
		cout << "Acceleration de " << valeur << " km/h." << endl;
	}
	void Cmoteur::ralentir(trmin) {
		vitesse -= valeur;
		if (regime < 900)
			regime = 900; //regime au ralenti

	void Cmoteur::getpuissance() {
		return puissance
	}
	void Cmoteur::afficher() {
		std::cout << "cylindre :" << cylindree << "L" << std::endl;
		std::cout << "puissance :" << puissance << "ch" << std::endl;
		std::cout << "carburant :" << typeCarburant << std::endl;
		std::cout << "etat :" << (enMarch "demaree" : "arrete") << std:endl;
		std::cout << "Regime :" << regime << "trmin" << std::endl;
	}

	}

	
}