/*!
* \file Eveque.cpp
* \brief Fichier contenant l'implémentation de la classe Eveque
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param nom le nom
* \param ordre l'ordre dans lequel le personnage joue
* \param comp le comportement
*/
Eveque::Eveque(string nom, int ordre, ComportementMachine * comp): Personnage(nom,ordre,comp){

}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Eveque::~Eveque(){}

/*!
 * \brief Méthode qui défini la capacité de l'évèque
 * Chaque quartier religieux lui rapporte une pièce d'or
 * \param joueur le joueur qui controle l'éveque
 */
void Eveque::capacite(Joueur* joueur){
	joueur->prendrePiece(joueur->compterQuartiersReligieux());
}



