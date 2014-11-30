/*!
 * \file Condottiere.cpp
 * \brief Classe Condottiere qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */

 Condottiere::Condottiere(string nom, int ordre, ComportementMachine* comp): Personnage(nom,ordre,comp){

 }

 
/*!
 * \brief Méthode qui défini la capacité du Condottiere
 * Chaque quartier militaire lui rapporte une pièce d'or
 */
void Condottiere::capacite(Joueur * joueur){
	joueur->prendrePiece(joueur->compterQuartiersMilitaires());
}
/*!
 * \brief Méthode qui défini la deuxieme capacité du Condottiere
 * il peut détruire un quartier
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
