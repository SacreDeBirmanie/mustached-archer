/*
   Fichier Partie.hpp

   Définition du type Partie
*/

#ifndef PARTIE_HPP
#define PARTIE_HPP


#include <string> // pour le type std::string

class Partie{


	private :
		int VilleA8=0;//modifier par un joueur si sa cité a 8 quartiers
		Pioche pioche=new Pioche();//pioche de la partie
		Personnage[] personnages;//pointeurs vers persos
		Joueur[] joueurs;//pointeurs vers joueurs
		AssociationPJ[] roles;
		

	public :
		Partie();//constructeur de la classe Partie
		void remiseAuPropre();// remet les joueurs dans l'etatNeutre
		void choixDesPersonnages(); //permet à chaque joueur de choisir son personnage
		void DebutDuJeu();//debute la partie
		void lancementDuTour();//lance le tour une fois le choix des personnages effectué
		void finDuJeu();//Vérfie si la partie peut être terminé
		
};



/******************************************************************************/
#include "Partie.cpp"
#endif // PARTIE_HPP
