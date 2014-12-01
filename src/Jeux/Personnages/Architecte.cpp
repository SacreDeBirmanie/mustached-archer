/*!
* \file Architecte.cpp
* \brief Fichier contenant l'implémentation de la classe Architecte
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
Architecte::Architecte(string nom, int ordre,ComportementMachine * comp): Personnage(nom, ordre, comp){

}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Architecte::~Architecte(){}

/*!
 * \brief Méthode qui défini la capacité de l'architecte
 * Pioche deux cartes supplémentaires
 * \param joueur le joueur qui controle ce personnage
 */
void Architecte::capacite(Joueur* joueur){
	joueur->piocher(2);
}



