/*!
* \file Merveille.hpp
* \brief Fichier contenant les entêtes de la classe Merveille
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef MERVEILLE_HPP
#define MERVEILLE_HPP


//--------------------------------------------------
/*!
* \class Merveille
* \brief Classe implémentant les Merveilles
*/
class Merveille : public Quartier{

	public :
		Merveille(string nom, int type,int cout);
		~Merveille();
		virtual void pouvoir() = 0;
		
		
};



/******************************************************************************/
#include "Merveille.cpp"
#endif // MERVEILLE_HPP
