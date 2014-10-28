/*
   Fichier Eveque.hpp

   Définition du type Eveque
*/

#ifndef EVEQUE_HPP
#define EVEQUE_HPP

#include <string> // pour le type std::string

class Eveque{


	private :

		

	public :
		Eveque();//constructeur de la classe Eveque
		int recevoirBleu(Carte[] cite);
		
};



/******************************************************************************/
#include "Eveque.cpp"
#endif // EVEQUE_HPP