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
		map<String, Joueur> listeJoueurs;
		map<int, Personnage> listePersonnages();
		map<String,int> AssocJP;
		map<String,String> AssocPJ;
		

	public :
		AssociationPersonnageJoueur(const &vector<Joueur> js, const &vector<Personnage> ps);//constructeur de la classe AssociationPersonnageJoueur
		bool nouveauJoueur(Joueur joueur);
		bool nouveauPersonnage(Personnage personnage);
		int nbJoueurs();
		int nbPersonnages();
		void associer(Personnage p, Joueur j);
		void associer(Joueur j, Personnage p);
		void reinitialiser();
		Joueur retrouverJ(Personnage p);
		Personnage retrouverP(Joueur j);
		vector<Personnage> persosDisponible();
		vector<Joueur> ordreTour();
		vector<Joueur> ordreChoixPersonnages();
		Personnage personnageAleatoire();
		joueur joueurAleatoire();
		void couronnement();
		
		
};



/******************************************************************************/
#include "AssociationPersonnageJoueur.cpp"
#endif // ASSOCIATIONPERSONNAGEJOUEUR_HPP
