/*!
 * \file Marchand.cpp
 * \brief Classe Marchand qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */


/*!
 * \brief Méthode qui défini la capacité du marchand
 * Chaque quartier marchand lui rapporte une pièce d'or
 */
 
 Marchand::Marchand(string nom, int ordre, ComportementMachine* comp):Personnage(nom,ordre,comp){
 
}
void Marchand::capacite(Joueur* joueur){	
	joueur->prendrePiece(joueur->compterQuartiersMarchands());
}

