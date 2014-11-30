/*!
 * \file Joueur.cpp
 * \brief La classe Joueur
 * \author François Hallereau & Sébastien Vallée
 */


Joueur::Joueur(string pseudo,Partie* partie): pseudo_(pseudo),partie_(partie), cite_(new Cite()),pieceOr_(0){}

string Joueur::getPseudo(){
	return pseudo_;
}

vector<Quartier*> Joueur::getMain(){
	return main_;
}

void Joueur::setMain(vector<Quartier*> main){
	main_=main;
}

Comportement* Joueur::getComportement(){
	return comportement_;
}

int Joueur::getPieceOr(){
	return pieceOr_;
}

void Joueur::setPieceOr(int piece){
	pieceOr_=piece;
}

vector<Quartier*> Joueur::recupererCite(){
	return cite_->recupererCite();
}

void Joueur::piocher(int nombre){
    vector<Quartier*> tmp = this->partie_->piocher(nombre);
    vector<Quartier*>::iterator it = tmp.begin();

	main_.assign(it,tmp.end());
}

void Joueur::prendrePiece(int nombre){
	pieceOr_+=this->partie_->prendrePiece(nombre);
}

bool Joueur::construire(Quartier *quartier){
	int i=0;
	for(vector<Quartier*>::iterator it = main_.begin();it!=main_.end();++it){
		//TODO vérifier le test d'égalité
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

bool Joueur::detruire(Quartier * quartier){
    if(cite_->estPresent(quartier)){
        cite_->supprimerQuartier(quartier);
        partie_->defausserCarte(quartier);
        return true;
    }
    else
        return false;
}

void Joueur::choisirPersonnage(vector<Personnage*> persosDispo){
	comportement_->choisirPersonnage(partie_,persosDispo,this);
}

void Joueur::choisirGainTour(){
    comportement_->choisirGainTour(this);
}

int Joueur::compterQuartiersMarchands(){
	return cite_->compterQuartiersMarchands();
}
int Joueur::compterQuartiersReligieux(){
	return cite_->compterQuartiersReligieux();
}
int Joueur::compterQuartiersNobles(){
	return cite_->compterQuartiersNobles();
}
int Joueur::compterQuartiersMilitaires(){
	return cite_->compterQuartiersMilitaires();
}

int Joueur::decompteDesPoints(){
	int total = 0;
	for(vector<Quartier*>::iterator it = main_.begin();it!=main_.end();++it){
		total += (*it)->getPoints();
	}
	return total;
}

bool Joueur::operator==(Joueur const& b){
    //Teste si a.pseudo == b.pseudo
    return this->pseudo_==b.pseudo_;
}
