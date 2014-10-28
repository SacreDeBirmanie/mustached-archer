/*
   Fichier Voleur.hpp

   Définition du type Voleur
*/

#ifndef VOLEUR_HPP
#define VOLEUR_HPP

#include <string> // pour le type std::string

class Voleur{


	private :

		

	public :
		Voleur();//constructeur de la classe Voleur
		void voler(Joueur joueur);
		
};



/******************************************************************************/
#include "Voleur.cpp"
#endif // VOLEUR_HPP