/*!
* \file Personnage.hpp
* \brief Fichier contenant les entêtes de la classe Personnage
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

//--------------------------------------------------
/*!
* \class Personnage
* \brief Classe qui implémente le type abstrait personnage
*/
class Personnage{


	protected :
		string nom_;
		int numero_;
		ComportementMachine * comportementMachine_;


	public :
		//! Le constructeur
		Personnage(string nom, int numero, ComportementMachine * comp);
		~Personnage();
		int getOrdre();
		string getNom();
		ComportementMachine* getComportementMachine();

};



/******************************************************************************/
#include "Personnage.cpp"
#endif // PERSONNAGE_HPP
