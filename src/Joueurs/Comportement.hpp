#ifndef COMPORTEMENT_HPP
#define COMPORTEMENT_HPP

class Comportement{

	public :
		Comportement();
		virtual void jouer(Partie * p,Joueur *j);
		virtual void choisirPersonnage(Partie * partie,vector<Personnage*> persosDispos,Joueur * j);
		virtual void choisirGainTour(Joueur * j);
		virtual void choisirConstruction(Joueur * j);

};

#endif // COMPORTEMENT_HPP
