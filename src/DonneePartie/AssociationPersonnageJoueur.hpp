/*
   Fichier AssociationPersonnageJoueur.hpp

   Définition du type AssociationPersonnageJoueur
*/

#ifndef ASSOCIATIONPERSONNAGEJOUEUR_HPP
#define ASSOCIATIONPERSONNAGEJOUEUR_HPP

#include <string> // pour le type std::string
#include <vector>  //for std::vector

class AssociationPersonnageJoueur{


	private :
		int couronnement_; // savoir le joueur commencant à choisir son personnage
		bool selection_;
		int curseur_, choixCourant_;
		
		vector<Joueur*> * placementJoueur;//
		
		map<string, Joueur*> listeJoueurs;
		map<int, Personnage*> listePersonnages;
		
		map<string,int>  AssocJP;
		map<int,string> AssocPJ;
		
		Chaine<string> ordreTour;
		Maillon<string> tourCourant;
		

	public :
		AssociationPersonnageJoueur();
		AssociationPersonnageJoueur(const &vector<Joueur> js, const &vector<Personnage> ps);//constructeur de la classe AssociationPersonnageJoueur
		bool nouveauJoueur(Joueur *joueur);
		bool nouveauPersonnage(Personnage *personnage);
		int nbJoueurs();
		int nbPersonnages();
		void associer(Personnage *p, Joueur *j);
		void associer(Joueur *j, Personnage *p);
		void reinitialiser();
		Joueur* retrouverJ(Personnage *p);
		Personnage* retrouverP(Joueur *j);
		vector<Personnage>* persosDisponible();
		vector<Joueur>* ordreTour();
		Joueur* joueurSuivant();
		vector<Joueur>* ordreChoixPersonnages();
		Personnage* personnageAleatoire();
		Joueur* joueurAleatoire();
		void deplacerCurseurChoixPerso(bool init=false);
		void couronnement(Joueur *joueur);
		
		
};



/******************************************************************************/
#include "AssociationPersonnageJoueur.cpp"
#endif // ASSOCIATIONPERSONNAGEJOUEUR_HPP
