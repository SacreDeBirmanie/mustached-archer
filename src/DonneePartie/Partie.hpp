/*
   Fichier Partie.hpp

   Définition du type Partie
*/

#ifndef PARTIE_HPP
#define PARTIE_HPP


#include <string> // pour le type std::string
#include <vector>  //for std::vector
class Partie{


	private :
		int limiteTailleVille;//*******observer ? des que la cite d un joueur est modifie**********
		bool villeComplete=false;//modifier par un joueur si sa cité a 8 quartiers****** Observer ?des que la cite d un joueur est modifie *****
		Pioche & pioche;//pioche de la partie
		AssociationPersonnageJoueur roles;//role de chaque joueur
		
	protected :
		void nouveauJoueur(Joueur *joueur);
		void nouveauPersonnage(Personnage *personnage);
		void entreDeuxTours();// remet les joueurs dans l'etatNeutre
		void choixDesPersonnages(); //permet à chaque joueur de choisir son personnage
		void debuterLeJeu();//debute la partie
		void lancementDuTour();//lance le tour une fois le choix des personnages effectué
		bool finDuJeu();//Vérfie si la partie peut être terminé
	public :
		Partie(Pioche pioche, int tailleVille);//constructeur de la classe Partie
		void decompteDesPoints(map<string,int> &tmp);//methode permettant de décompter les points cite de chaque joueurs enregistre dans un tableau
		void associer(Personnage *p, Joueur *j);
		void proclamerLeVainqueur();
		void recupererJoueurs();
		int prendrePiece(int nombre);
		
};



/******************************************************************************/
#include "Partie.cpp"
#endif // PARTIE_HPP
