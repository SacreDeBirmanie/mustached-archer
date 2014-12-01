Machine::Machine(string pseudo,Partie * partie) : Joueur(pseudo,partie){

}

void Machine::setComportement(Personnage *p){
	comportement_ = p->getComportementMachine();
}

void Machine::jouer(){
    comportement_->jouer(partie_,this);

}

void Machine::choisirPersonnage(vector<Personnage*> persosDispo){
	int nb = Aleatoire::tirerEntier(0,persosDispo.size());
	partie_->associer(persosDispo.at(nb),this);
}
