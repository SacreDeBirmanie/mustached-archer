/*!
* \file Voleur.cpp
* \brief Fichier contenant l'implémentation de la classe Voleur
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/


EstVole * Voleur::estVole_ = new EstVole();

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param nom le nom
* \param ordre l'ordre dans lequel le personnage joue
* \param comp le comportement
*/
Voleur::Voleur(string nom, int ordre, ComportementMachine * comp,EstVole * perso): Personnage(nom,ordre,comp){
	estVole_ = perso;
}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Voleur::~Voleur(){}

void Voleur::setVole(Joueur * voleur, Joueur * cible){
	estVole_->setVole(voleur,cible,cible->getComportement());
}

/*!
 * \brief Méthode qui défini la capacité du voleur
 * le voleur vole les pièces d'or d'un joueur
 * à condition que ce joueur ne soit pas l'assassin
 * ou qu'il ne se soit pas fait assassiner.
 */
void Voleur::voler(Joueur* voleur,Joueur* cible){
	estVole_->setVole(voleur,cible,cible->getComportement());
	cible->setComportement(estVole_);

}
