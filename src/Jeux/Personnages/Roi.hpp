/*
   Fichier Roi.hpp

   Définition du type Roi
*/

#ifndef ROI_HPP
#define ROI_HPP

#include <string> // pour le type std::string

class Roi{


	private :

		

	public :
		Roi();//constructeur de la classe Roi
		int recevoirJaune(Carte[] cite);
		
};



/******************************************************************************/
#include "Roi.cpp"
#endif // ROI_HPP