/*
   Fichier Partie.hpp

   Définition du type Partie
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



class Partie : public Observer{


	private :
		int limiteTailleVille_;//limite de quartier mettant fin à la partie
		bool villeComplete_;//vrai lorsqu'un joueur a au moins limiteTailleVille quartier
		Pioche * pioche_;//pioche de la partie
		AssociationPersonnageJoueur * roles_;//role de chaque joueur


		void entreDeuxTours();// remet les joueurs dans l'etatNeutre
		void choixDesPersonnages(); //permet à chaque joueur de choisir son personnage
		void lancementDuTour();//lance le tour une fois le choix des personnages effectué
		void update(int taille);//Appelé si la taille d'une citadelle augmente
		bool finDuJeu();//Vérifie si la partie peut être terminé
		void proclamerLeVainqueur();


	public :
		Partie(Pioche  *pioche, int tailleVille);//constructeur de la classe Partie
		void nouveauJoueur(Joueur *joueur);
		void nouveauPersonnage(Personnage *personnage);
		void debuterLeJeu();//debute la partie
		void decompteDesPoints(map<string,int> *tmp);//methode permettant de décompter les points cite de chaque joueurs enregistre dans un tableau
		void associer(Personnage *p, Joueur *j);
		vector<Quartier*> piocher(int nombre);
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
#include "../Joueurs/IA/Comportements/ComportementIA.hpp"
#include "../Jeux/Personnages/Personnage.hpp"
#include "../Joueurs/Joueur.hpp"
#include "../Joueurs/IA/IA.hpp"

#include "../Joueurs/IA/Comportements/ComportementIA.cpp"
#include "AssociationPersonnageJoueur.cpp"

/******************************************************************************/
#include "Partie.cpp"
#endif // PARTIE_HPP
