/*!
 * \file Joueur.cpp
 * \brief La classe Joueur
 * \author François Hallereau & Sébastien Vallée
 */

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param pseudo le pseudo du joueur
* \param partie la partie
*/
Joueur::Joueur(string pseudo,Partie* partie): pseudo_(pseudo),partie_(partie), cite_(new Cite()),pieceOr_(0){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Joueur::~Joueur(){}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #pseudo_
*/
string Joueur::getPseudo(){
	return pseudo_;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #main_
*/
vector<Quartier*> Joueur::getMain(){
	return main_;
}

//--------------------------------------------------
/*!
* \brief Mutateur de l'attribut #main_
* \param main la nouvelle main
*/
void Joueur::setMain(vector<Quartier*> main){
	main_=main;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #comportement_
*/
Comportement* Joueur::getComportement(){
	return comportement_;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #pieceOr_
*/
int Joueur::getPieceOr(){
	return pieceOr_;
}

//--------------------------------------------------
/*!
* \brief Mutateur de l'attribut #piece_
* \param piece le nouveau montant
*/
void Joueur::setPieceOr(int piece){
	pieceOr_=piece;
}

//--------------------------------------------------
/*!
* \brief Accesseur de l'attribut #cite_
* \return la cité sous forme de vecteur
*/
vector<Quartier*> Joueur::recupererCite(){
	return cite_->recupererCite();
}

//--------------------------------------------------
/*!
* \brief Mutateur de l'attribut #comportement_
* \param comp le nouveau comportement
*/
void Joueur::setComportement(Comportement * comp){
    comportement_ = comp;
}

//--------------------------------------------------
/*!
* \brief Méthode qui permet à un joueur de piocher des cartes
* \param nombre le nombre de carte
*/
void Joueur::piocher(int nombre){
    vector<Quartier*> tmp = this->partie_->piocher(nombre);
    vector<Quartier*>::iterator it = tmp.begin();

	main_.assign(it,tmp.end());
}

//--------------------------------------------------
/*!
* \brief Méthode qui permet au joueur de se défausser de carte
* \param cartes les cartes à défausser
*/
void Joueur::defausser(vector<Quartier*> cartes){
    for(vector<Quartier*>::iterator it = cartes.begin();it!=cartes.end();++it){
        for(vector<Quartier*>::iterator iter = main_.begin();iter!=main_.end();++iter){
            if(*iter==*it){
                main_.erase(iter);
            }
        }
        partie_->defausserCarte(*it);
    }
}

//--------------------------------------------------
/*!
* \brief Méthode qui permet de prendre des pièces dans la banque
* \param nombre le nombre de pieces
*/
void Joueur::prendrePiece(int nombre){
	pieceOr_+=partie_->prendrePiece(nombre);
}

//--------------------------------------------------
/*!
* \brief Méthode qui permet de construire un quartier
* \param quartier le quartier à construire
* \return vrai si le quartier est construit
*/
bool Joueur::construire(Quartier* quartier){
	int i=0;
	for(vector<Quartier*>::iterator it = main_.begin();it!=main_.end();++it){
		if(((*it)->getNom()).compare(quartier->getNom())==0){//le quartier est dans notre main
			if(!cite_->estPresent(quartier)){
				if(quartier->getCout()<=pieceOr_){//on peut acheter le quartier
					cite_->ajouterQuartier(quartier);//on ajoute le quartier dans notre cité
					main_.erase(main_.begin()+i);//on enlève le quartier de notre main
					return true;
				}
				else
					return false;
			}
			else
				return false;
		}
		++i;
	}
	return false;
}

//--------------------------------------------------
/*!
* \brief Méthode qui détruit un quartier
* \param quartier le quartier à détruire
*/
bool Joueur::detruire(Quartier * quartier){
    if(cite_->estPresent(quartier)){
        cite_->supprimerQuartier(quartier);
        partie_->defausserCarte(quartier);
        return true;
    }
    else
        return false;
}

//--------------------------------------------------
/*!
* \brief Méthode qui permet au joueur de choisir un personnage
* \param persosDispo les personnages disponibles
*/
void Joueur::choisirPersonnage(vector<Personnage*> persosDispo){
	comportement_->choisirPersonnage(partie_,persosDispo,this);
}

//--------------------------------------------------
/*!
* \brief Méthode qui permet de prendre des cartes ou des pièces
*/
void Joueur::choisirGainTour(){
    comportement_->choisirGainTour(this);
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte les quartiers marchands du joueurs
* \return le nombre de quartiers
*/
int Joueur::compterQuartiersMarchands(){
	return cite_->compterQuartiersMarchands();
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte les quartiers religieux du joueurs
* \return le nombre de quartiers
*/
int Joueur::compterQuartiersReligieux(){
	return cite_->compterQuartiersReligieux();
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte les quartiers nobles du joueurs
* \return le nombre de quartiers
*/
int Joueur::compterQuartiersNobles(){
	return cite_->compterQuartiersNobles();
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte les quartiers militaires du joueurs
* \return le nombre de quartiers
*/
int Joueur::compterQuartiersMilitaires(){
	return cite_->compterQuartiersMilitaires();
}

//--------------------------------------------------
/*!
* \brief Méthode qui compte les points du joueurs
* \return le nombre de points
*/
int Joueur::decompteDesPoints(){
	int total = 0;
	for(vector<Quartier*>::iterator it = main_.begin();it!=main_.end();++it){
		total += (*it)->getPoints();
	}
	return total;
}

//--------------------------------------------------
/*!
* \brief redéfinition de l'opérateur ==
* \param b un joueur
* \return vrai si les deux joueurs sont les mêmes
*/
bool Joueur::operator==(Joueur const& b){
    //Teste si a.pseudo == b.pseudo
    return this->pseudo_==b.pseudo_;
}
