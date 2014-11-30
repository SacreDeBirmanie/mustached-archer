/*!
 * \brief Méthode qui défini la capacité du voleur
 * le voleur vole les pièces d'or d'un joueur
 * à condition que ce joueur ne soit pas l'assassin
 * ou qu'il ne se soit pas fait assassiner.
 */

Voleur::Voleur(string nom, int ordre, ComportementMachine * comp): Personnage(nom,ordre,comp){

}
void Voleur::voler(Joueur* voleur,Joueur* vole){
	if(dynamic_cast<ComportementMacchabeeMachine*>(vole->getComportement())==0||dynamic_cast<ComportementAssassinMachine*>(vole->getComportement())==0){
		cout<<"Erreur, ce personnage ne peut être volé"<<endl;
	}
	else{
		voleur->setPieceOr(vole->getPieceOr() + voleur->getPieceOr());
		vole->setPieceOr(0);
	}

}
