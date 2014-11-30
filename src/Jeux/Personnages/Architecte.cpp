/*!
 * \file Architecte.cpp
 * \brief Classe Architecte qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */


/*!
 * \brief Méthode qui défini la capacité de l'architecte
 * Pioche deux cartes supplémentaires
 */
void Architecte::capacite(Joueur* joueur){
	joueur->piocher(2);
}



