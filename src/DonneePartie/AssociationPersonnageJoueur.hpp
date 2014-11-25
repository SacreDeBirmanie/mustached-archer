/*
   Fichier AssociationPersonnageJoueur.hpp

   Définition du type AssociationPersonnageJoueur
*/

#ifndef ASSOCIATIONPERSONNAGEJOUEUR_HPP
#define ASSOCIATIONPERSONNAGEJOUEUR_HPP

#include <string> // pour le type std::string
#include <vector>  //for std::vector
class Joueur;
class Personnage;

class AssociationPersonnageJoueur{


	private :
		int couronnement_; // savoir le joueur commencant à choisir son personnage
		bool selection_;
		int curseur_, choixCourant_;

		vector<Joueur*> placementJoueur_;//

		map<string, Joueur*> listeJoueurs_;
		map<int, Personnage*> listePersonnages_;

		map<string,int>  assocJP_;
		map<int,string> assocPJ_;

		Chaine<Joueur*> *ordreTour_;
		Maillon<Joueur*> *joueurCourant_;


	public :
		AssociationPersonnageJoueur();

		bool nouveauJoueur(Joueur *joueur);
		bool nouveauPersonnage(Personnage *personnage);
		int nbJoueurs();
		int nbPersonnages();
		void associer(Personnage *p, Joueur *j);
		void associer(Joueur *j, Personnage *p);
		void reinitialiser();
		Joueur* retrouverJ(Personnage *p);
		Personnage* retrouverP(Joueur *j);
		vector<Personnage*> persosDisponible();
		vector<Joueur*> ordreTour();
		Joueur* joueurSuivant();
		vector<Joueur*> ordreChoixPersonnages();
		Joueur* joueurSuivantChoixPersonnages();
		Joueur* joueurSuivantTour();
		Personnage* personnageAleatoire();
		Joueur* joueurAleatoire();
		void deplacerCurseurChoixPerso(bool init=false);
		void couronnement(Joueur *joueur);

		void modifierOrdreJoueur(Joueur *j);
		void modifierOrdreJoueur(Joueur *j,Joueur *jj);


};



/******************************************************************************/
#endif // ASSOCIATIONPERSONNAGEJOUEUR_HPP
