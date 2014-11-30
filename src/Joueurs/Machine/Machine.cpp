Machine::Machine(string pseudo,Partie * partie) : Joueur(pseudo,partie){

}

void Machine::setComportement(Personnage *p){
	comportement_ = p->getComportementMachine();
}

void Machine::jouer(){
    comportement_->jouer(partie_,this);

}
