/*
   Fichier IA.hpp

   Définition du type IA
*/

#ifndef IA_HPP
#define IA_HPP

#include <string> // pour le type std::string
class IA : public Comportement{


	private :
		ComportementIA comportement_;

	public :
		void setComportement(Personnage p);
};



/******************************************************************************/
#include "IA.cpp"
#endif // IA_HPP
