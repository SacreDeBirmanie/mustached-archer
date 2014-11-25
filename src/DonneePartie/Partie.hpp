/*
   Fichier Partie.hpp

   Définition du type Partie
*/

#ifndef PARTIE_HPP
#define PARTIE_HPP


#include <string> // pour le type std::string
#include <vector>  //for std::vector
class Partie : public Observer{


	private :
		int limiteTailleVille_;//limite de quartier mettant fin à la partie
		bool villeComplete_=false;//vrai lorsqu'un joueur a au moins limiteTailleVille quartier
		Pioche * pioche_;//pioche de la partie
		AssociationPersonnageJoueur * roles_;//role de chaque joueur

		void nouveauJoueur(Joueur *joueur);
		void nouveauPersonnage(Personnage *personnage);
		void entreDeuxTours();// remet les joueurs dans l'etatNeutre
		void choixDesPersonnages(); //permet à chaque joueur de choisir son personnage
		void debuterLeJeu();//debute la partie
		void lancementDuTour();//lance le tour une fois le choix des personnages effectué
		void update(int taille);//Appelé si la taille d'une citadelle augmente
		bool finDuJeu();//Vérifie si la partie peut être terminé


	public :
		Partie(Pioche  *pioche, int tailleVille);//constructeur de la classe Partie
		Partie(Pioche* pioche);//constructeur de la classe Partie
		void decompteDesPoints(map<string,int> &tmp);//methode permettant de décompter les points cite de chaque joueurs enregistre dans un tableau
		void associer(Personnage *p, Joueur *j);
		void proclamerLeVainqueur();
		void recupererJoueurs();
		int prendrePiece(int nombre);
		void modifierOrdreJoueur(Joueur *j);
		void modifierOrdreJoueur(Joueur *j, Joueur *jj);

};



/******************************************************************************/
#include "Partie.cpp"
#endif // PARTIE_HPP
