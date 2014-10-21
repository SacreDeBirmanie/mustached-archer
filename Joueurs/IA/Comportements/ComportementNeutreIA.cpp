ComportementNeutreIA::ComportementNeutreIA(){
		
}

void jouer(Partie p, Joueur j){
	
}

void choisirPersonnage(Partie p, Joueur j, vector<Personnage> & persosDispo){
	int nb = Aleatoire.tirerEntier(0,persosDispo.size());
	p->associer(persosDispo.at(nb),j);
	p->erase(nb);
}
