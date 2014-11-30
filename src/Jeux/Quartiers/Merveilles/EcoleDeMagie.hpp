/*!
* \file EcoleDeMagie.hpp
* \brief Fichier contenant les entêtes de la classe EcoleDeMagie
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef ECOLEDEMAGIE_HPP
#define ECOLEDEMAGIE_HPP


//--------------------------------------------------
/*!
* \class EcoleDeMagie
* \brief Classe implémentant l'école de magie
*/
class EcoleDeMagie : public Merveille{

	public :
		EcoleDeMagie();
		~EcoleDeMagie();
		void pouvoir();
		
		
};



/******************************************************************************/
#include "EcoleDeMagie.cpp"
#endif // ECOLEDEMAGIE_HPP
