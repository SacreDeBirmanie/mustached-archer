/*!
* \file Joueur.hpp
* \brief Fichier contenant les entêtes de la classe Joueur
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

//--------------------------------------------------
/*!
* \class Joueur
* \brief Classe implémentant le type abstrait Joueur
*/
class Joueur{


	protected :
		string pseudo_;//!< le pseudo du joueur
		vector<Quartier*> main_;//!< cartes dans la main du joueur
		int pieceOr_;//!< nombre de piece d'or du joueur
		Cite* cite_;//!< la citadelle du joueur
		Partie * partie_;//!< la partie en cours
		Comportement * comportement_;//!< le comportement du joueur



	public :
		Joueur(string pseudo,Partie *partie);//constructeur de la classe Joueur
		~Joueur();
		string getPseudo();
		vector<Quartier*> getMain();
		void setMain(vector<Quartier*> main);
		Comportement* getComportement();
		int getPieceOr();
		void setPieceOr(int piece);
		vector<Quartier*> recupererCite();
		void setComportement(Comportement * comp);
        virtual void setComportement(Personnage * p)= 0;
        virtual void jouer()=0;//effectue un tour de jeu


		//void choisirPersonnage();//permet au joueur de choisir un personnage

		void piocher(int nombre);//pioche un nombre de carte
		void defausser(vector<Quartier*> cartes);
		void prendrePiece(int nombre);//prend un nombre de piece
		bool construire(Quartier * quartier);//construit un quartier dans sa cite
		bool detruire(Quartier * quartier);
		void choisirPersonnage(vector<Personnage*> persosDispo);
		void choisirGainTour();
		int compterQuartiersMarchands();
		int compterQuartiersReligieux();
		int compterQuartiersNobles();
		int compterQuartiersMilitaires();
		int decompteDesPoints();

		bool operator==(Joueur const &b);

};



/******************************************************************************/
#include "Joueur.cpp"
#endif // JOUEUR_HPP
