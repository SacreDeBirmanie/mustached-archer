/*
   Fichier Joueur.hpp

   Définition du type Joueur
*/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <string> // pour le type std::string
#include "Quartier.hpp"
class Joueur{


	protected :
		String Pseudo;
		vector<Quartier> main;//cartes dans la main du joueur
		vector<Quartier> cite;//*************a remplacer par une classe cité pour gérer les carte avec les merveilles (retour de méthode pour les pouvoirs )********//
		int pieceOr;//nombre de piece d'or du joueur
		Comportement comportement; // personnage joué par le joueur(Normal si le personnage n'a pas encore ete selectionnie)
		

	public :
		virtual Joueur();//constructeur de la classe Joueur
		~Joueur();
		virtual void setComportement(Personnage p);
		Comportement getComportement();
		virtual void choisirPersonnage(Partie p, vector<Personnage> persosDispo);
		
		
		void jouer(Partie p);//effectue un tour de jeu
		
		
		//void choisirPersonnage();//permet au joueur de choisir un personnage
		
		void piocher(int nombre);//pioche un nombre de carte
		void prendrePiece(int nombre);//prend un nombre de piece
		bool construire(Quartier quartier);//construit un quartier dans sa cite
		//void capacite();// active la capacité spéciale du personnage choisi
		int decompteDesPoints();
		
};



/******************************************************************************/
#include "Joueur.cpp"
#endif // JOUEUR_HPP
