EstVole * Voleur::estVole_ = new EstVole();
/*!
 * \brief Méthode qui défini la capacité du voleur
 * le voleur vole les pièces d'or d'un joueur
 * à condition que ce joueur ne soit pas l'assassin
 * ou qu'il ne se soit pas fait assassiner.
 */

Voleur::Voleur(string nom, int ordre, ComportementMachine * comp,EstVole * perso): Personnage(nom,ordre,comp){
	estVole_ = perso;
}

void Voleur::setVole(Joueur * voleur, Joueur * cible){
	estVole_->setVole(voleur,cible,cible->getComportement());
}

void Voleur::voler(Joueur* voleur,Joueur* cible){
	estVole_->setVole(voleur,cible,cible->getComportement());
	cible->setComportement(estVole_);

}
