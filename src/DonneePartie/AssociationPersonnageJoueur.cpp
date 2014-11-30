/*!
* \file AssociationPersonnageJoueur.cpp
* \brief Fichier contenant l'implémentation de la classe AssociationPersonnageJoueur
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
AssociationPersonnageJoueur::AssociationPersonnageJoueur() {
	ordreTour_ = new Chaine<Joueur*>();
	joueurCourant_ = NULL;
}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
AssociationPersonnageJoueur::~AssociationPersonnageJoueur() {}


//--------------------------------------------------
/*!
* \brief Méthode qui ajoute un joueur
* \param joueur Le joueur à ajouter
* \return vrai si le joueur a été ajouté
*/
bool AssociationPersonnageJoueur::nouveauJoueur(Joueur* joueur){
		if(listeJoueurs_.find(joueur->getPseudo())!= listeJoueurs_.end()){
			return false;
		}
		else{
			listeJoueurs_[joueur->getPseudo()] = joueur;
			placementJoueur_.push_back(joueur);
			return true;
		}
}

//--------------------------------------------------
/*!
* \brief Méthode qui ajoute un personnage
* \param personnage Le personnage à ajouter
* \return vrai si le personnage a été ajouté
*/
bool AssociationPersonnageJoueur::nouveauPersonnage(Personnage *personnage){
	if(listePersonnages_.find(personnage->getOrdre())!=listePersonnages_.end()){
		return false;
	}
	else{
		listePersonnages_[personnage->getOrdre()] = personnage;
		return true;
	}
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne le nombre de joueurs
* \return Le nombre de joueurs
*/
int AssociationPersonnageJoueur::nbJoueurs(){
	return listeJoueurs_.size();
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne le nombre de personnages
* \return le nombre de personnages
*/
int AssociationPersonnageJoueur::nbPersonnages(){
	return listePersonnages_.size();
}

//--------------------------------------------------
/*!
* \brief Méthode qui associe un joueur à un personnage
* \param j Le joueur à associer
* \param p Le personnage à associer
*/
void AssociationPersonnageJoueur::associer(Personnage* p, Joueur* j){
	assocJP_[j->getPseudo()] = p->getOrdre();
	assocPJ_[p->getOrdre()] = j->getPseudo();
	j->setComportement(p);

}

//--------------------------------------------------
/*!
* \brief Méthode qui associe un joueur à un personnage
* \param j Le joueur à associer
* \param p Le personnage à associer
*/
void AssociationPersonnageJoueur::associer(Joueur* j, Personnage* p){
	assocPJ_[p->getOrdre()] =j->getPseudo();
	assocJP_[j->getPseudo()] = p->getOrdre();
	j->setComportement(p);
}

//--------------------------------------------------
/*!
* \brief Méthode qui réinitialise les associations
*/
void AssociationPersonnageJoueur::reinitialiser(){
	for (map<string, Joueur*>::iterator iter = listeJoueurs_.begin(); iter != listeJoueurs_.end(); iter++ ){
		assocJP_[iter->first] = -1;
	}

	for ( map<int,Personnage*>::iterator iter = listePersonnages_.begin(); iter != listePersonnages_.end(); iter++ ){
		assocPJ_[iter->first] = "";
	}

	selection_ = false;
}

//--------------------------------------------------
/*!
* \brief Méthode qui retrouve le joueur associé à un personnage
* \param p Le personnage
* \return Le joueur
*/
Joueur* AssociationPersonnageJoueur::retrouverJ(Personnage* p){
	return listeJoueurs_[assocPJ_[p->getOrdre()]];
}

//--------------------------------------------------
/*!
* \brief Méthode qui retrouve le personnage associé à un joueur
* \param j Le joueur
* \return Le personnage
*/
Personnage* AssociationPersonnageJoueur::retrouverP(Joueur* j){
	return listePersonnages_[assocJP_[j->getPseudo()]];
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne la liste des personnages disponibles
* \return La liste de personnages
*/
vector<Personnage*> AssociationPersonnageJoueur::persosDisponible(){
	vector<Personnage*> tmp;

	for ( map<int,string>::iterator iter = assocPJ_.begin(); iter != assocPJ_.end(); iter++ ){
		if(iter->second =="")
			tmp.push_back(listePersonnages_[iter->first]);
	}
	return tmp;
}

//--------------------------------------------------
/*!
* \brief Méthode qui appelle le prochain joueur à jouer
* \return Le joueur
*/
Joueur* AssociationPersonnageJoueur::joueurSuivantTour(){
	if(joueurCourant_->suivant != NULL){
		Maillon<Joueur*> * tmp = joueurCourant_;
		joueurCourant_ = joueurCourant_->suivant;
		return tmp->element;
	}
	else
		return NULL;
}

//--------------------------------------------------
/*!
* \brief 
* \param init 
*/
void AssociationPersonnageJoueur::deplacerCurseurChoixPerso(bool init){
	if(init==false)
			choixCourant_ = (choixCourant_ +1) % placementJoueur_.size();
	else{
		selection_ = true;
		choixCourant_ = couronnement_;
	}
}

//--------------------------------------------------
/*!
* \brief Méthode qui invite le prochain joueur à choisir son personnage
* \return Le joueur
*/
Joueur* AssociationPersonnageJoueur::joueurSuivantChoixPersonnages(){
	if(choixCourant_ != couronnement_ && selection_ == true){
		deplacerCurseurChoixPerso(false);
		return placementJoueur_.at(choixCourant_);
	}
	else if(choixCourant_ == couronnement_ && selection_ == false){
		deplacerCurseurChoixPerso(true);
		return placementJoueur_.at(choixCourant_);
	}
	else
		return NULL;
}

//--------------------------------------------------
/*!
* \brief 
* \return 
*/
Joueur* AssociationPersonnageJoueur::joueurSuivantDecomptePoints(){
	return NULL;
}

//--------------------------------------------------
/*!
* \brief Méthode qui couronne un joueur
* \param j Le joueur
*/
void AssociationPersonnageJoueur::couronnement(Joueur* j){
	for(int i=0; i<placementJoueur_.size();++i){
		if((j->getPseudo()).compare((placementJoueur_.at(i))->getPseudo())){
			couronnement_ = i;
			break;
		}
	}
}

//--------------------------------------------------
/*!
* \brief Méthode qui place le joueur à la fin de la liste
* \param j Le joueur
*/
void AssociationPersonnageJoueur::modifierOrdreJoueur(Joueur* j){
	ordreTour_->retirerElement(j);
	ordreTour_->insererQueue(j);
}

//--------------------------------------------------
/*!
* \brief Méthode qui place un joueur après un autre
* \param j1 Le joueur qui sera déplacé
* \param j2 Le joueur derrière lequel j1 sera placé
*/
void AssociationPersonnageJoueur::modifierOrdreJoueur(Joueur* j1, Joueur* j2){
	ordreTour_->retirerElement(j1);
	ordreTour_->insererApres(j1,j2);
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne la liste des joueurs
* \return La liste
*/
vector<Joueur*> AssociationPersonnageJoueur::recupererListeJoueurs(){
    return placementJoueur_;
}

