/*
   Fichier Joueur.hpp

   Définition du type Joueur
*/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <string> // pour le type std::string

class Joueur{


	private :
		vector<Quartier> main;//cartes dans la main du joueur
		vector<Quartier> cite;//*************a remplacer par une classe cité pour gérer les carte avec les merveilles (retour de méthode pour les pouvoirs )********//
		int pieceOr;//nombre de piece d'or du joueur
		Etat etat; // personnage joué par le joueur(Normal si le personnage n'a pas encore ete selectionnie)
		

	public :
		Joueur();//constructeur de la classe Joueur
		void setEtat();
		void tourDeJeu();//effectue un tour de jeu
		void piocher(int nombre);//pioche un nombre de carte
		void prendrePiece(int nombre);//prend un nombre de piece
		void construire(Quartier quartier);//construit un quartier dans sa cite
		
};



/******************************************************************************/
#include "Joueur.cpp"
#endif // JOUEUR_HPP
