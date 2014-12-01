/**
*   Fichier FabriquePersonnage.hpp
*   \brief Définition du type FabriquePersonnage
*/

#ifndef FABRIQUEPERSONNAGE_HPP
#define FABRIQUEPERSONNAGE_HPP

#include "../Jeux/Personnages/Assassin.hpp"
#include "../Jeux/Personnages/Marchand.hpp"
#include "../Jeux/Personnages/Condottiere.hpp"
#include "../Jeux/Personnages/Magicien.hpp"
#include "../Jeux/Personnages/Voleur.hpp"
#include "../Jeux/Personnages/Architecte.hpp"
#include "../Jeux/Personnages/Roi.hpp"
#include "../Jeux/Personnages/Eveque.hpp"



class FabriquePersonnage{


	private :



	public :
		FabriquePersonnage();//constructeur de la classe FabriquePersonnage
		Personnage * creerAssassin();
		Personnage * creerVoleur();
		Personnage * creerMagicien();
		Personnage * creerRoi();
		Personnage * creerEveque();
		Personnage * creerMarchand();
		Personnage * creerArchitecte();
		Personnage * creerCondottiere();


};

#include "FabriquePersonnage.cpp"
/******************************************************************************/
#endif // FABRIQUEPERSONNAGE_HPP
