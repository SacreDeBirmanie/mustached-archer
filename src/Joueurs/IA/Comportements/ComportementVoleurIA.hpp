/**
*   Fichier ComportementVoleurIA.hpp
*   \brief Définition du type ComportementVoleurIA
*/

#ifndef ETATVOLEURIA_HPP
#define ETATVOLEURIA_HPP

#include <string> // pour le type std::string

class ComportementVoleurIA : public ComportementIA{


	private :

		

	public :
		ComportementVoleurIA();//constructeur de la classe EtatVoleurIA
		void jouer();
		Personnage choixVole();
		
};



/******************************************************************************/
#include "ComportementVoleurIA.cpp"
#endif // ETATVOLEURIA_HPP
