Joueur * voleur_;
Joueur * cible_;
Comportement * comportement_;

EstVole::EstVole():Personnage("etreVole",-1,new ComportementEstVoleMachine()){

}

void EstVole::setVole(Joueur * voleur, Joueur * cible, Comportement * comportement){
	voleur_ = voleur;
	cible_= cible;
	comportement_ = comportement;
}

void EstVole::seFaireVoler(){
		voleur_->setPieceOr(voleur_->getPieceOr() + cible_->getPieceOr());
		cible_->setPieceOr(0);
		cible_->setComportement(comportement_);
		cible_->jouer();
}
