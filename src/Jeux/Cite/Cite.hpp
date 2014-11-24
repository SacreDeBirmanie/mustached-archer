/**
*   Fichier Cite.hpp
*   \brief Définition du type Cite
*/

#ifndef CITE_HPP
#define CITE_HPP

public class Cite : public Observable{
	
	private :
		vector<Quartier*> quartiers; //la citadelle
	public :
		Cite();//le constructeur
		int valeur(); //retourne la valeur de la citadelle
		bool estPresent(Quartier* q);//test si un quartier est présent
		bool ajouterQuartier(Quartier* q);//ajoute un quartier à la citadelle
		bool supprimerQuartier(Quartier* q);//supprime un quartier de la citadelle
		void afficher(); //affiche la citadelle
		
};

/******************************************************************************/
#include "Cite.cpp"
#endif // CITE_HPP
