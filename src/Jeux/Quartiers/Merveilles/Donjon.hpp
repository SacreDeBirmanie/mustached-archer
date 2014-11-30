/*!
* \file Donjon.hpp
* \brief Fichier contenant les entêtes de la classe Donjon
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef DONJON_HPP
#define DONJON_HPP


//--------------------------------------------------
/*!
* \class Donjon
* \brief Classe implémentant le donjon
*/
class Donjon : public Merveille{

	public :
		Donjon();
		~Donjon();
		void pouvoir();
		
		
};



/******************************************************************************/
#include "Donjon.cpp"
#endif // DONJON_HPP
