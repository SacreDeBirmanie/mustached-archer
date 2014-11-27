/**
*   Fichier ComportementRoiIA.hpp
*   \brief Définition du type ComportementRoiIA
*/

#ifndef ETATROIIA_HPP
#define ETATROIIA_HPP

#include <string> // pour le type std::string

class ComportementRoiIA : public ComportementIA{


	private :

		

	public :
		ComportementRoiIA();//constructeur de la classe EtatRoiIA
		void jouer();
		
};



/******************************************************************************/
#include "ComportementRoiIA.cpp"
#endif // ETATROIIA_HPP
