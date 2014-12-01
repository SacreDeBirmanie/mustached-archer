/*!
* \file Roi.cpp
* \brief Fichier contenant l'implémentation de la classe Roi
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
Roi::Roi(string nom, int ordre, ComportementMachine * comp): Personnage(nom,ordre,comp){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Roi::~Roi(){}


/*!
 * \brief Méthode qui défini la capacité du roi
 * Chaque quartier noble lui rapporte une pièce d'or
 * Il prend en plus possession de la couronne
 * \param partie la partie
 * \param joueur le joueur qui controle le roi
 */
void Roi::capacite(Partie * partie, Joueur* joueur){
	joueur->prendrePiece(joueur->compterQuartiersNobles());
	partie->couronnement(joueur);

}


