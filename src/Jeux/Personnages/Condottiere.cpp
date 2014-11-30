/*!
 * \file Condottiere.cpp
 * \brief Classe Condottiere qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */


/*!
 * \brief Méthode qui défini la capacité du Condottiere
 * Chaque quartier militaire lui rapporte une pièce d'or
 * il peut en plus détruire un quartier
 */

void Condottiere::capacite(Joueur * joueur){
	joueur->prendrePiece(joueur->compterQuartiersMilitaires());
}

bool Condottiere::destruction(Joueur * condo, Joueur * cible, Quartier * quartier){

}
