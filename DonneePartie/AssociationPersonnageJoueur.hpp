/*
   Fichier AssociationPersonnageJoueur.hpp

   Définition du type AssociationPersonnageJoueur
*/

#ifndef ASSOCIATIONPERSONNAGEJOUEUR_HPP
#define ASSOCIATIONPERSONNAGEJOUEUR_HPP

#include <string> // pour le type std::string

class AssociationPersonnageJoueur{


	private :
		Joueur * j couronnement;
		vector<Joueur> &listeJoueurs;
		vector<Personnage> &listePersonnages();
		map<String,*Personnage> AssocJP;
		map<String,*Joueur> AssocPJ;
		

	public :
		AssociationPersonnageJoueur(const &vector<Joueur> js, const &vector<Personnage> ps);//constructeur de la classe AssociationPersonnageJoueur
		void associer(Personnage p, Joueur j);
		Joueur retrouverJ(Personnage p);
		Personnage retrouverP(Joueur j);
		vector<Personnage> persosDisponible();
		vector<Joueur> ordreTour();
		vector<Joueur> ordreChoixPersonnages();
		void couronnement();
		
		
};



/******************************************************************************/
#include "AssociationPersonnageJoueur.cpp"
#endif // ASSOCIATIONPERSONNAGEJOUEUR_HPP
