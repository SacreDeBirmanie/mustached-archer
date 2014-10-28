ComportementMacchabeeIA::ComportementMacchabeeIA(){

}

int ComportementMacchabeeIA::assassinat(string joueur, string personnage){
	this->joueur = joueur;
	this->personnage = personnage;
	this->seDevoiler = false;
}

void ComportementMacchabeeIA::jouer(Partie p, Joueur j){
	if(this->seDevoiler)
		cout<<joueur<<" est le personnage "<<personnage<<"qui a été assassiné"<<endl;
	else
		
}

Personnage ComportementMacchabeeIA::choixAssassinat(){

}