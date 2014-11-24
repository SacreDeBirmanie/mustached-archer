/*
   Fichier Joueur.hpp

   Définition du type Joueur
*/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Personnage;
class Partie;
class Quartier;


class Joueur{


	protected :
		string pseudo_;
		vector<Quartier*> main_;//cartes dans la main du joueur
	    Cite cite_;//*************a remplacer par une classe cité pour gérer les carte avec les merveilles (retour de méthode pour les pouvoirs )********//
		int pieceOr_;//nombre de piece d'or du joueur
		Partie * partie_;
		Comportement * comportement;



	public :
		Joueur(string pseudo,Partie *partie);//constructeur de la classe Joueur
		~Joueur();
		string getPseudo();
		vector<Quartier*> getMain();


		virtual void setComportement(Personnage * p)=0;
		virtual void choisirPersonnage(vector<Personnage> persosDispo)=0;


		void jouer();//effectue un tour de jeu


		//void choisirPersonnage();//permet au joueur de choisir un personnage

		void piocher(int nombre);//pioche un nombre de carte
		void prendrePiece(int nombre);//prend un nombre de piece
		bool construire(Quartier quartier);//construit un quartier dans sa cite
		//void capacite();// active la capacité spéciale du personnage choisi
		int decompteDesPoints();

		bool operator==(Joueur const &b);

};



/******************************************************************************/
#include "Joueur.cpp"
#endif // JOUEUR_HPP
