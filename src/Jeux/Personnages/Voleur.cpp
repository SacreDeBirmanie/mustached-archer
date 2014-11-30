/*!
 * \brief Méthode qui défini la capacité du voleur
 * le voleur vole les pièces d'or d'un joueur
 * à condition que ce joueur ne soit pas l'assassin
 * ou qu'il ne se soit pas fait assassiner.
 */
void Voleur::capacite(Joueur* voleur,Joueur* vole){	
	if(dynamic_cast<ComportementMacchabeeIA*>(vole->getComportement()==0||dynamic_cast<ComportementAssassinIA*>(vole->getComportement()==0){
		cout<<"Erreur, ce personnage ne peut être volé"<<endl;
	}
	else{
		voleur->setPieceOr(vole->getPieceOr() + voleur->getPieceOr());
		vole->setPieceOr(0);	
	}
	
}
