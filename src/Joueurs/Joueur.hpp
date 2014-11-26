/*
   Fichier Joueur.hpp

   Définition du type Joueur
*/

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Partie;
class Comportement;


class Joueur{


	protected :
		string pseudo_;
		vector<Quartier*> main_;//cartes dans la main du joueur
	    Cite cite_;//*************a remplacer par une classe cité pour gérer les carte avec les merveilles (retour de méthode pour les pouvoirs )********//
		int pieceOr_;//nombre de piece d'or du joueur
		Partie * partie_;
		Comportement comportement_;



	public :
		Joueur(string pseudo,Partie *partie);//constructeur de la classe Joueur
		~Joueur();//lol zzzfzfzf
		string getPseudo();
		vector<Quartier*> getMain();


		virtual void setComportement(Personnage * p);


		virtual void jouer();//effectue un tour de jeu


		//void choisirPersonnage();//permet au joueur de choisir un personnage

		void piocher(int nombre);//pioche un nombre de carte
		void prendrePiece(int nombre);//prend un nombre de piece
		bool construire(Quartier * quartier);//construit un quartier dans sa cite
		void choisirPersonnage(vector<Personnage*> persosDispo);
		void choisirGainTour();
		//void capacite();// active la capacité spéciale du personnage choisi
		int decompteDesPoints();

		bool operator==(Joueur const &b);

};



/******************************************************************************/
#endif // JOUEUR_HPP
