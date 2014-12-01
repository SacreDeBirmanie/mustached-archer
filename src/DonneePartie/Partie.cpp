/*!
* \file Partie.cpp
* \brief Fichier contenant l'implémentation de la classe Partie
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param pioche la pioche du jeu
* \param tailleVille le critère mettant fin à un partie, vaut 8 si non spécifié
*/
Partie::Partie(Pioche * pioche, int tailleVille=8):
pioche_(pioche), limiteTailleVille_(tailleVille), roles_(new AssociationPersonnageJoueur()) , villeComplete_(false) {}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Partie::~Partie(){}

//--------------------------------------------------
/*!
* \brief Méthode qui réinitialise l'association des personnages à chaque fin de tour
*/
void Partie::entreDeuxTours(){
	roles_->reinitialiser();
}


//--------------------------------------------------
/*!
* \brief Méthode qui invite les joueurs à choisir les personnages
*/
void Partie::choixDesPersonnages(){
	cout<<"Les joueurs vont choisir leur personnages"<<endl;
	Joueur *joueur = roles_->joueurSuivantChoixPersonnages();
	while(joueur != NULL){
		joueur->choisirPersonnage(roles_->persosDisponible());
		joueur = roles_->joueurSuivantChoixPersonnages();
		Sleep(200);
	}
	cout<<"Tout le monde a choisit son personnage, le tour va pouvoir commencer"<<endl;
}

//--------------------------------------------------
/*!
* \brief Méthode qui lance la partie
*/
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

void Partie::couronnement(Joueur *joueur){
    roles_->couronnement(joueur);
}

//--------------------------------------------------
/*!
* \brief Méthode qui lance un tour
*/
void Partie::lancementDuTour(){
	cout<<"le tour debute"<<endl;
	Joueur * joueur = roles_->joueurSuivantTour();
	cout<<"le joueur est selectionne"<<endl;
	while(joueur != NULL){
        cout<<"on est dedans !"<<endl;
        cout<<"Au joueur :"<<joueur->getPseudo()<<endl;
		joueur->jouer();
		joueur = roles_->joueurSuivantTour();
		Sleep(200);
	}

	cout<<"Le tour est termine"<<endl;
}

//--------------------------------------------------
/*!
* \brief Méthode qui reçoit les tailles des différentes cités
* \param taille la taille d'une cité
*/
void Partie::update(int taille){
	if(taille>=limiteTailleVille_)
		villeComplete_ = true;
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne la valeur de l'attribut villeComplete_
* \return vrai si un joueur à fini sa cité
* \see #villeComplete_
*/
bool Partie::finDuJeu(){
	return villeComplete_;
}

//--------------------------------------------------
/*!
* \brief Méthode qui ajoute un nouveau joueur
* \param joueur le nouveau joueur
*/
void Partie::nouveauJoueur(Joueur* joueur){
	if(!roles_->nouveauJoueur(joueur))
		cout<<"Le joueur "<<joueur->getPseudo()<<" a deja ete ajoute dans la partie"<<endl;
}

//--------------------------------------------------
/*!
* \brief Méthode qui ajoute un nouveau personnage
* \param personnage le nouveau personnage
*/
void Partie::nouveauPersonnage(Personnage* personnage){
	if(!roles_->nouveauPersonnage(personnage))
		cout<<"Le personnage "<<personnage->getNom()<<" a deja ete ajoute dans la partie"<<endl;
}

//--------------------------------------------------
/*!
* \brief Méthode qui fait le décompte des points
* \param tmp la liste des joueurs avec leurs points respectifs
*/
void Partie::decompteDesPoints(map<string,int>* tmp){
    Joueur *joueur = roles_->joueurSuivantDecomptePoints();
	while(joueur!=NULL){
		(*tmp)[joueur->getPseudo()]=joueur->decompteDesPoints();
	}

}

//--------------------------------------------------
/*!
* \brief Méthode qui associe joueur à un personnage
* \param p le personnage
* \param j le joueur
*/
void Partie::associer(Personnage* p, Joueur* j){
	roles_->associer(p,j);
}

//--------------------------------------------------
/*!
* \brief Méthode qui détermine le vainqueur
*/
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

//--------------------------------------------------
/*!
* \brief Méthode qui tire des cartes de la pioche
* \param nombre le nombre de cartes
* \return les cartes piochées
*/
vector<Quartier*> Partie::piocher(int nombre){
	return pioche_->piocher(nombre);
}

/*!
* \brief Méthode qui defausse des cartes en dessous de la pioche
* \param les quartiers a defausser
*/
void Partie::defausserCarte(vector<Quartier*> quartiers){
    pioche_->defausserCarte(quartiers);
}

/*!
* \brief Méthode qui defausse une carte en dessous de la pioche
* \param le quartier a defausser
*/
void Partie::defausserCarte(Quartier * quartier){
    pioche_->defausserCarte(quartier);
}

//--------------------------------------------------
/*!
* \brief Méthode qui retire des pièces de la banque
* \param nombre le nombre de pièces
* \return les pièces
*/
int Partie::prendrePiece(int nombre){
	return pioche_->prendrePiece(nombre);
}

//--------------------------------------------------
/*!
* \brief Méthode qui place le joueur à la fin de la liste
* \param j Le joueur
*/
void Partie::modifierOrdreJoueur(Joueur *j){
	roles_->modifierOrdreJoueur(j);
}

//--------------------------------------------------
/*!
* \brief Méthode qui place un joueur après un autre
* \param j1 Le joueur qui sera déplacé
* \param j2 Le joueur derrière lequel j1 sera placé
*/
void Partie::modifierOrdreJoueur(Joueur* j1, Joueur* j2){
	roles_->modifierOrdreJoueur(j1,j2);
}

//--------------------------------------------------
/*!
* \brief Méthode qui retrouve le joueur associé à un personnage
* \param p Le personnage
* \return Le joueur
*/
Joueur* Partie::retrouverJ(Personnage *p){
    return roles_->retrouverJ(p);
}

//--------------------------------------------------
/*!
* \brief Méthode qui retrouve le personnage associé à un joueur
* \param j Le joueur
* \return Le personnage
*/
Personnage* Partie::retrouverP(Joueur *j){
   return roles_->retrouverP(j);
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne le nombre de joueurs
* \return Le nombre de joueurs
*/
int Partie::nbJoueurs(){
    return roles_->nbJoueurs();
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne le nombre de personnages
* \return le nombre de personnages
*/
int Partie::nbPersonnages(){
    return roles_->nbPersonnages();
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne la liste des joueurs
* \return La liste
*/
vector<Joueur*> Partie::recupererListeJoueurs(){
    return roles_->recupererListeJoueurs();
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne la liste des personnages
* \return La liste
*/
vector<Personnage*> Partie::recupererListePersonnages(){
    return roles_->recupererListePersonnages();
}
