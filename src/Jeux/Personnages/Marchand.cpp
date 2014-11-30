/*!
 * \file Marchand.cpp
 * \brief Classe Marchand qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */
 
 Marchand::Marchand(string nom, int ordre, ComportementMachine* comp):Personnage(nom,ordre,comp){
 
}

/*!
 * \brief Méthode qui défini la capacité du marchand
 * Chaque quartier marchand lui rapporte une pièce d'or
 */
void Marchand::capacite(Joueur* joueur){	
	joueur->prendrePiece(joueur->compterQuartiersMarchands()+1);
}

