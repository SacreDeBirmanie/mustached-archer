Partie::Partie(Pioche & pioche, int tailleVille=8):
pioche(pioche), limiteTailleVille(tailleVille){

}

void nouveauJoueur(Joueur *joueur){
	if(roles.nouveauJoueur(joueur))
		cout<<"Le joueur "<<joueur.getPseudo()<<" a deja ete ajoute dans la partie");
}

void nouveauPersonnage(Personnage personnage){
	if(roles.nouveauPersonnage(*personnage))
		cout<<"Le personnage "<<personnage.getNom()<<" a deja ete ajoute dans la partie");
}

Partie::entreDeuxTours(){
	roles->reinitialiser();
}



Partie::choixDesPersonnages(){
	cout<<"Les joueurs vont choisir leur personnages"<<endl;
	Joueur *joueur = roles->joueurSuivantChoixPersonnages();
	while(joueur != NULL){
		joueur->choisirPersonnages();
		*joueur = roles->joueurSuivantChoixPersonnages();
	}
	cout<<"Tout le monde a choisit son personnage, le tour va pouvoir commencer"<<endl;
}

Partie::debuterLeJeu(Association assoc,Pioche pioche){
	if(roles.nbJoueurs>=roles.nbPersonnages)
		cout<<"impossible de demarrer la partie, il manque des personnages"<<endl;
	else{
		while(!finDuJeu()){
			EntreDeuxTours();
			choixDesPersonnages();
			lancementDuTour();
		}
		proclamerLeVainqueur();
	}
}

Partie::lancementDuTour(){
	Joueur * joueur = joueur->joueurSuivantTour();
	while(joueur != NULL)
		joueur->jouer(this);
		joueur = joueur->joueurSuivantTour();
	}
	
	cout<<"Le tour est termine"<<endl;
}

Partie::finDuJeu(){
	return this->villeComplete;
}

Partie::decompteDesPoints(&map<String,int> tmp){//************tableau associatif n'est pas forcément le meilleur choix********
	
	for ( vector<Joueur>::iterator iter = joueurs.begin(); iter != joueurs.end(); iter++ ){
		tmp[*iter.getPseudo()]=*iter.decompteDesPoints();
	}
	
}

void Partie::associer(Personnage p, Joueur j){
	this->roles->associer(p,j);
}

void Partie::proclamerLeVainqueur(Association assoc,Pioche pioche){
	map<String,int> tmp;
	decompteDesPoints(tmp);
	
	String vainqueur = NULL;
	
	cout<<"|| DECOMPTE DES POINTS ||"<<endl;
	for(tmp::iterator it=tmp.begin() ; it!=tmp.end() ; ++it){
		
		cout<<it->first<<" : "<<it->second<<endl;
		if(it->second > tmp[vainqueur]){
			vainqueur = it->first;
		}
	}
	
	cout<<"+++Et Le vainqueur est ...."<<vainqueur<<endl;
}

int prendrePiece(int nombre){
	this->pioche.prendrePiece();
}
