/*!
* \file Roi.hpp
* \brief Fichier contenant les entêtes de la classe Roi
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef ROI_HPP
#define ROI_HPP

//--------------------------------------------------
/*!
* \class Roi
* \brief Classe implémentant le personnage Roi
*/
class Roi : public Personnage{


	private :

		

	public :
		Roi(string nom, int ordre, ComportementMachine * comp);
		~Roi();
		static void capacite(Partie * partie,Joueur* joueur);
};


#include "../../Joueurs/Machine/Comportements/ComportementRoiMachine.hpp"
/******************************************************************************/
#include "Roi.cpp"
#endif // Roi


