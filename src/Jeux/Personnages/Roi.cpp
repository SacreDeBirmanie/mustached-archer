/*!
 * \file Roi.cpp
 * \brief Classe Roi qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */
Roi::Roi(string nom, int ordre, ComportementMachine * comp): Personnage(nom,ordre,comp){

}

/*!
 * \brief Méthode qui défini la capacité du roi
 * Chaque quartier noble lui rapporte une pièce d'or
 */
void Roi::capacite(Partie * partie, Joueur* joueur){
	joueur->prendrePiece(joueur->compterQuartiersNobles());
	partie->couronnement(joueur);

}


