/*!
* \file AssociationPersonnageJoueur.hpp
* \brief Fichier contenant les entêtes de la classe AssociationPersonnageJoueur
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef ASSOCIATIONPERSONNAGEJOUEUR_HPP
#define ASSOCIATIONPERSONNAGEJOUEUR_HPP

//--------------------------------------------------
/*!
* \class AssociationPersonnageJoueur
* \brief Classe gérant l'attribution des personnages entre chaque joueur
*/

class AssociationPersonnageJoueur{


	private :
		int couronnement_; //!<  désigne le joueur qui commence le tour
		bool selection_; //!< vrai si le joueur couronné à choisi son perso
		int curseur_; //!<
		int choixCourant_; //!<le joueur qui choisi son perso
		vector<Joueur*> placementJoueur_;//!<
		map<string, Joueur*> listeJoueurs_;//!< Liste des joueurs de la partie
		map<int, Personnage*> listePersonnages_;//!< Liste des personnages de la partie
		map<string,int>  assocJP_;//!< liste associant un joueur à un personnage
		map<int,string> assocPJ_;//!< liste associant un personnage à un joueur
		Chaine<Joueur*> *ordreTour_;//!< liste chainé qui contient les joueurs dans l'ordre du tour
		Maillon<Joueur*> *joueurCourant_;//!< le joueur en train de jouer

		vector<int> recupererListeOrdre();//!< retourne un vector trié des ordres des personnages


	public :
		AssociationPersonnageJoueur();
		~AssociationPersonnageJoueur();

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
		Joueur* joueurSuivantTour();
		void deplacerCurseurChoixPerso(bool init);
		Joueur* joueurSuivantChoixPersonnages();
		Joueur* joueurSuivantDecomptePoints();
		void couronnement(Joueur *joueur);
		void modifierOrdreJoueur(Joueur *j);
		void modifierOrdreJoueur(Joueur *j,Joueur *jj);
		vector<Joueur*> recupererListeJoueurs();
		vector<Personnage*> recupererListePersonnages();


};



/******************************************************************************/
#endif // ASSOCIATIONPERSONNAGEJOUEUR_HPP
