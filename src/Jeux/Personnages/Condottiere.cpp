/*!
* \file Condottiere.cpp
* \brief Fichier contenant l'implémentation de la classe Condottiere
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
Condottiere::Condottiere(string nom, int ordre, ComportementMachine* comp): Personnage(nom,ordre,comp){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Condottiere::~Condottiere(){}
 
/*!
 * \brief Méthode qui défini la capacité du Condottiere
 * Chaque quartier militaire lui rapporte une pièce d'or
 * \param joueur le joueur qui controle le condottiere
 */
void Condottiere::capacite(Joueur * joueur){
	joueur->prendrePiece(joueur->compterQuartiersMilitaires());
}
/*!
 * \brief Méthode qui défini la deuxieme capacité du Condottiere
 * il peut détruire un quartier
 * \param condo le joueur qui controle le condottiere
 * \param cible le joueur ciblé
 * \param quartier le quartier à détruire
 */
bool Condottiere::destruction(Joueur * condo, Joueur * cible, Quartier * quartier){
	if(quartier->getCout()-1<= condo->getPieceOr()){
		if(cible->detruire(quartier)){
			condo->setPieceOr(condo->getPieceOr()-quartier->getCout()+1);
			return true;
		}
		else
			return false;
	}
	return false;
}
