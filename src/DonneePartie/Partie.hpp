/*!
* \file Partie.hpp
* \brief Fichier contenant les entêtes de la classe Partie
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef PARTIE_HPP
#define PARTIE_HPP


#include <string> // pour le type std::string
#include <vector>  //for std::vector
#include <map>

//inclusion des classes independantes necessaires
#include "Observer.hpp"
#include "../Jeux/Cite/Observable.hpp"

#include "../ClassesUtiles/Aleatoire.cpp"
#include "../ClassesUtiles/listeChainee.cpp"
#include "../Jeux/Quartiers/Quartier.hpp"

//inclusion des classes dependantes
#include "../Jeux/Cite/Cite.hpp"
#include "Pioche.hpp"

//inclusion des classes interdependantes
class Joueur;
class Personnage;
#include "AssociationPersonnageJoueur.hpp"


//--------------------------------------------------
/*!
* \class Partie
* \brief Classe gérant une partie
*/
class Partie : public Observer{


	private :

	//attributs
		int limiteTailleVille_; //!< limite de quartier mettant fin à la partie
		bool villeComplete_; //!< vrai lorsqu'un joueur a au moins #limiteTailleVille_ quartier
		Pioche * pioche_; //!< pioche de la partie
		AssociationPersonnageJoueur * roles_; //!< role de chaque joueur

	//méthodes privées
		void entreDeuxTours();
		void choixDesPersonnages();
		void lancementDuTour();
		void update(int taille);
		bool finDuJeu();
		void proclamerLeVainqueur();


	public :
		Partie(Pioche  *pioche, int tailleVille);
		~Partie();
		void nouveauJoueur(Joueur *joueur);
		void nouveauPersonnage(Personnage *personnage);
		void debuterLeJeu();
		void decompteDesPoints(map<string,int> *tmp);
		void associer(Personnage *p, Joueur *j);
		vector<Quartier*> piocher(int nombre);
		void defausserCarte(vector<Quartier*> quartiers);
		void defausserCarte(Quartier * quartier);
		int prendrePiece(int nombre);
		void modifierOrdreJoueur(Joueur *j);
		void modifierOrdreJoueur(Joueur *j, Joueur *jj);
		Joueur* retrouverJ(Personnage *p);
		Personnage* retrouverP(Joueur *j);
		int nbJoueurs();
		int nbPersonnages();
		vector<Joueur*> recupererListeJoueurs();

};

//inclusion des classes dépendants de partie
#include "../Joueurs/Comportement.hpp"
#include "../Joueurs/Machine/Comportements/ComportementMachine.hpp"
#include "../Jeux/Personnages/Personnage.hpp"
#include "../Joueurs/Joueur.hpp"
#include "../Joueurs/Machine/Machine.hpp"

#include "../Joueurs/Machine/Comportements/ComportementMachine.cpp"
#include "AssociationPersonnageJoueur.cpp"

/******************************************************************************/
#include "Partie.cpp"
#endif // PARTIE_HPP
