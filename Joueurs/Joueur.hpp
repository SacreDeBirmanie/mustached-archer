/*
   Fichier Joueur.hpp

   Définition du type Joueur
*/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <string> // pour le type std::string

class Joueur{


	private :
		vector<Quartier> main;
		vector<Quartier> cite;//*************a remplacer par une classe cité pour gérer les carte avec les merveilles (retour de méthode pour les pouvoirs )********//
		int pieceOr;//nombre de piece d'or du joueur
		Etat etat; // personnage joué par le joueur(Normal si le personnage n'a pas encore ete selectionnie)
		

	public :
		Joueur();//constructeur de la classe Joueur
		void tourDeJeu();
		void piocher(int nombre);
		void prendrePiece(int nombre);
		void construire(Quartier quartier);
		
};



/******************************************************************************/
#include "Joueur.cpp"
#endif // JOUEUR_HPP
