Partie::Partie(Pioche * pioche, int tailleVille=8):
pioche_(pioche), limiteTailleVille_(tailleVille), roles_(new AssociationPersonnageJoueur()) {

}

void Partie::nouveauJoueur(Joueur *joueur){
	if(roles_->nouveauJoueur(joueur))
		cout<<"Le joueur "<<joueur->getPseudo()<<" a deja ete ajoute dans la partie";
}

void Partie::nouveauPersonnage(Personnage *personnage){
	if(roles_->nouveauPersonnage(personnage))
		cout<<"Le personnage "<<personnage->getNom()<<" a deja ete ajoute dans la partie";
}

void Partie::entreDeuxTours(){
	roles_->reinitialiser();
}



void Partie::choixDesPersonnages(){
	cout<<"Les joueurs vont choisir leur personnages"<<endl;
	Joueur *joueur = roles_->joueurSuivantChoixPersonnages();
	while(joueur != NULL){
		joueur->choisirPersonnage(roles_->persosDisponible());
		joueur = roles_->joueurSuivantChoixPersonnages();
	}
	cout<<"Tout le monde a choisit son personnage, le tour va pouvoir commencer"<<endl;
}

void Partie::debuterLeJeu(){
	if(roles_->nbJoueurs()>=roles_->nbPersonnages())
		cout<<"impossible de demarrer la partie, il manque des personnages"<<endl;
	else{
		while(!finDuJeu()){
			entreDeuxTours();
			choixDesPersonnages();
			lancementDuTour();
		}
		proclamerLeVainqueur();
	}
}

void Partie::lancementDuTour(){
	Joueur * joueur = roles_->joueurSuivantTour();
	while(joueur != NULL){
		joueur->jouer(this);
		joueur = joueur->joueurSuivantTour();
	}

	cout<<"Le tour est termine"<<endl;
}


void update(int taille){
	if(taille>=limiteTailleVille)
		villeComplete = true;
}

bool Partie::finDuJeu(){
	return this->villeComplete;
}

void Partie::decompteDesPoints(map<string,int> &tmp){//************tableau associatif n'est pas forcément le meilleur choix********

	for ( vector<Joueur*>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		tmp[(*iter)->getPseudo()]=(*iter)->decompteDesPoints();
	}

}

void Partie::associer(Personnage *p, Joueur *j){
	roles_->associer(p,j);
}

void Partie::associer(Personnage *p, Joueur *j){

}

void Partie::proclamerLeVainqueur(){
	map<string,int> tmp;
	decompteDesPoints(tmp);

	string vainqueur = NULL;

	cout<<"|| DECOMPTE DES POINTS ||"<<endl;
	for(map<string,int>::iterator it=tmp.begin() ; it!=tmp.end() ; ++it){

		cout<<it->first<<" : "<<it->second<<endl;
		if(it->second > tmp[vainqueur]){
			vainqueur = it->first;
		}
	}

	cout<<"+++Et Le vainqueur est ...."<<vainqueur<<endl;
}

Vector<quartier*> piocher(int nombre){
	return pioche->piocher(nombre);
}

int prendrePiece(int nombre){
	this->pioche.prendrePiece();
}

void modifierOrdreJoueur(Joueur *j){
	roles_->modifierOrdreJoueur(j);
}
void modifierOrdreJoueur(Joueur *j, Joueur *jj){
	roles_->modifierOrdreJoueur(j,jj);
}
