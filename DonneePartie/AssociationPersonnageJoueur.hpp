/*
   Fichier AssociationPersonnageJoueur.hpp

   Définition du type AssociationPersonnageJoueur
*/

#ifndef ASSOCIATIONPERSONNAGEJOUEUR_HPP
#define ASSOCIATIONPERSONNAGEJOUEUR_HPP

#include <string> // pour le type std::string

class AssociationPersonnageJoueur{


	private :
		const vector<Joueur> &listeJoueurs;
		const vector<Personnage> &listePersonnages();
		map<String,*Personnage> AssocJP;
		map<String,*Joueur> AssocPJ;
		

	public :
		AssociationPersonnageJoueur(const &vector<Joueur> js, const &vector<Personnage> ps);//constructeur de la classe AssociationPersonnageJoueur
		void associer(Personnage p, Joueur j);
		Joueur retrouverJ(Personnage p);
		Personnage retrouverP(Joueur j);
		vector<Joueur> ordreTour();
		
		
};



/******************************************************************************/
#include "AssociationPersonnageJoueur.cpp"
#endif // ASSOCIATIONPERSONNAGEJOUEUR_HPP
