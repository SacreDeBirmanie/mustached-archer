Partie::Partie(Pioche * pioche, int tailleVille=8):
pioche_(pioche), limiteTailleVille_(tailleVille), roles_(new AssociationPersonnageJoueur()) , villeComplete_(false) {

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
		joueur->jouer();
		joueur = roles_->joueurSuivantTour();
	}

	cout<<"Le tour est termine"<<endl;
}


void Partie::update(int taille){
	if(taille>=limiteTailleVille_)
		villeComplete_ = true;
}

bool Partie::finDuJeu(){
	return this->villeComplete_;
}

void Partie::nouveauJoueur(Joueur *joueur){
	if(roles_->nouveauJoueur(joueur))
		cout<<"Le joueur "<<joueur->getPseudo()<<" a deja ete ajoute dans la partie"<<endl;
}

void Partie::nouveauPersonnage(Personnage *personnage){
	if(roles_->nouveauPersonnage(personnage))
		cout<<"Le personnage "<<personnage->getNom()<<" a deja ete ajoute dans la partie"<<endl;
}

void Partie::decompteDesPoints(map<string,int> *tmp){//************tableau associatif n'est pas forcément le meilleur choix********
    Joueur *joueur = roles_->joueurSuivantDecomptePoints();
	while(joueur!=NULL){
		(*tmp)[joueur->getPseudo()]=joueur->decompteDesPoints();
	}

}

void Partie::associer(Personnage *p, Joueur *j){
	roles_->associer(p,j);
}

void Partie::proclamerLeVainqueur(){
	map<string,int> *tmp;
	decompteDesPoints(tmp);

	string vainqueur = NULL;

	cout<<"|| DECOMPTE DES POINTS ||"<<endl;
	for(map<string,int>::iterator it=tmp->begin() ; it!=tmp->end() ; ++it){

		cout<<it->first<<" : "<<it->second<<endl;
		if(it->second > (*tmp)[vainqueur]){
			vainqueur = it->first;
		}
	}

	cout<<"+++Et Le vainqueur est ...."<<vainqueur<<endl;
}

vector<Quartier*> Partie::piocher(int nombre){
	return pioche_->piocher(nombre);
}

int Partie::prendrePiece(int nombre){
	this->pioche_->prendrePiece(nombre);
}

void Partie::modifierOrdreJoueur(Joueur *j){
	roles_->modifierOrdreJoueur(j);
}
void Partie::modifierOrdreJoueur(Joueur *j, Joueur *jj){
	roles_->modifierOrdreJoueur(j,jj);
}

Joueur* Partie::retrouverJ(Personnage *p){
    return roles_->retrouverJ(p);
}

Personnage* Partie::retrouverP(Joueur *j){
   return roles_->retrouverP(j);
}

int Partie::nbJoueurs(){
    return roles_->nbJoueurs();
}
int Partie::nbPersonnages(){
    return roles_->nbPersonnages();
}

vector<Joueur*> Partie::recupererListeJoueurs(){
    return roles_->recupererListeJoueurs();
}
