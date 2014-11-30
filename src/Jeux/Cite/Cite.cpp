/*!
* \file Cite.cpp
* \brief Fichier contenant l'implémentation de la classe Cite
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
Cite::Cite(){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Cite::~Cite(){}

//--------------------------------------------------
/*!
* \brief Méthode qui calcule la valeur d'une cité
* \return la valeur de la cité
*/
int Cite::valeur(){
	int val =0;
	if(!quartiers_.empty()){
		for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
			val+=(*quartier)->getCout();
		}
	}
	return val;
}

//--------------------------------------------------
/*!
* \brief Méthode qui retourne la cite sous forme de vecteur de quartier
* \return la cité
*/
vector<Quartier*> Cite::recupererCite(){
    return quartiers_;
}

//--------------------------------------------------
/*!
* \brief Méthode qui teste si un quartier est présent
* \param q le quartier
* \return vrai si le quartier est présent
*/
bool Cite::estPresent(Quartier* q){
	if(quartiers_.empty()){
		for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
			if(((*quartier)->getNom()).compare(q->getNom())==0){
				return true;
			}
		}
	}
	return false;
}

//--------------------------------------------------
/*!
* \brief Méthode qui ajoute un quartier à la cité
* \param q le quartier
* \return vrai si le quartier a été ajouté
*/
bool Cite::ajouterQuartier(Quartier* q){
	if(!estPresent(q)){
		quartiers_.push_back(q);
		notify((unsigned int)quartiers_.size());
		return true;
	}
	return false;
}

//--------------------------------------------------
/*!
* \brief Méthode qui supprime un quartier de la cité
* \param q le quartier
* \return vrai si le quartier a été supprimé
*/
bool Cite::supprimerQuartier(Quartier* q){
	for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
		if(((*quartier)->getNom()).compare(q->getNom())==0){
			quartiers_.erase(quartier);
			return true;
		}
	}
	return false;
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte le nombre de quartier Marchand
* \return le nombre de quartier marchand
*/
int Cite::compterQuartiersMarchands(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){
		if((*it)->estMarchand())
			++cpt;
	}
	return cpt;

}

//--------------------------------------------------
/*!
* \brief Méthode qui compte le nombre de quartier Religieux
* \return le nombre de quartier religieux
*/
int Cite::compterQuartiersReligieux(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){
		if((*it)->estReligieux())
			++cpt;
	}
	return cpt;
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte le nombre de quartier Noble
* \return le nombre de quartier noble
*/
int Cite::compterQuartiersNobles(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){
		if((*it)->estNoble())
			++cpt;
	}
	return cpt;
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte le nombre de quartier Militaire
* \return le nombre de quartier militaire
*/
int Cite::compterQuartiersMilitaires(){
	int cpt =0;
	for(vector<Quartier*>::iterator it = quartiers_.begin();it!=quartiers_.end();++it){
		if((*it)->estMilitaire())
			++cpt;
	}
	return cpt;
}

//--------------------------------------------------
/*!
* \brief Méthode qui affiche la cité
*/
void Cite::afficher(){
	int taille = (unsigned int)quartiers_.size();
	if(taille <= 0){
		cout<<"La citadelle est vide"<<endl;
	}
	else if(taille == 1){
		cout<<"La citadelle est composé d'un seul et unique batiment"<<endl;
		cout<<"		-"<<(quartiers_.front())->getNom()<<" : "<<(quartiers_.front())->getCout()<<endl;
	}
	else{
		cout<<"La citadelle dispose de "<<taille<<" batiments :"<<endl;
		for(vector<Quartier*>::iterator quartier=quartiers_.begin();quartier!=quartiers_.end();++quartier){
			cout<<"		-"<<(quartiers_.front())->getNom()<<" : "<<(quartiers_.front())->getCout()<<endl;
		}
		cout<<"Elle cumule un total de "<<valeur()<<" points"<<endl;
	}
}
