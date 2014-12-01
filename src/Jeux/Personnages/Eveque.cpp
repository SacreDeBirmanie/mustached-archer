/*!
 * \file Eveque.cpp
 * \brief Classe Eveque qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */
Eveque::Eveque(string nom, int ordre, ComportementMachine * comp): Personnage(nom,ordre,comp){

}

/*!
 * \brief Méthode qui défini la capacité de l'évèque
 * Chaque quartier religieux lui rapporte une pièce d'or
 */
void Eveque::capacite(Joueur* joueur){
	joueur->prendrePiece(joueur->compterQuartiersReligieux());
}



