/**
*   Fichier Cite.hpp
*   \brief Définition du type Cite
*/

#ifndef CITE_HPP
#define CITE_HPP

class Cite : public Observable{
	
	private :
		vector<Quartier*> quartiers_; //la citadelle
	public :
		Cite();//le constructeur
		int valeur(); //retourne la valeur de la citadelle
		bool estPresent(Quartier* q);//test si un quartier est présent
		bool ajouterQuartier(Quartier* q);//ajoute un quartier à la citadelle
		bool supprimerQuartier(Quartier* q);//supprime un quartier de la citadelle
		int compterQuartiersMarchands();//permet de savoir le nombre de quartiers Marchand dans la cité
		int compterQuartiersReligieux();//permet de savoir le nombre de quartiers Religieux dans la cité
		int compterQuartiersNobles();//permet de savoir le nombre de quartiers Noble dans la cité
		int compterQuartiersMilitaires();//permet de savoir le nombre de quartiers Militaires dans la cité
		void afficher(); //affiche la citadelle
		
};

/******************************************************************************/
#include "Cite.cpp"
#endif // CITE_HPP
