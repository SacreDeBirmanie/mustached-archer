#ifndef COMPORTEMENT_HPP
#define COMPORTEMENT_HPP

class Comportement{
    public :
		Comportement();

		virtual void jouer(Partie * p,Joueur *j) = 0;

		void choisirPersonnage(Partie * p, vector<Personnage*> persosDispo,Joueur * j);
		void choisirGainTour(Joueur * j);
		void choisirConstruction(Joueur * j);

};

#include "Comportement.cpp"
#endif // COMPORTEMENT_HPP
