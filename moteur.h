#ifndef moteur.h
#define moteur.h
#include<string>

class Cmoteur
{
	private
		float cylindree;
	int puissance;
	std::string typeCarburant;
	bool enMarche;
	int regime;
	public
		Cmoteur();
	Cmoteur(float _cylindree, int _puissance, std::string _typeCarburant, bool _enMarche, int _regime);
	void demarrer();
	void arrete();
	void accelerer(int trmin);
	void getpuissance() const;
	void afficher() const;

};