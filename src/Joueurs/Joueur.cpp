/*!
 * \file Joueur.cpp
 * \brief La classe Joueur
 * \author François Hallereau & Sébastien Vallée
 */


Joueur::Joueur(string pseudo,Partie* partie): pseudo_(pseudo),partie_(partie){}

Joueur::~Joueur(){}

string Joueur::getPseudo(){
	return pseudo_;
}

vector<Quartier*> Joueur::getMain(){
	return main_;
}

void setComportement(){
}

void Joueur::choisirPersonnage(vector<Personnage*> persosDispo){
	this->comportement->choisirPersonnage(partie_,persosDispo,this);
}
void Joueur::jouer(){
	this->comportement->jouer(partie_,this);
}

void Joueur::piocher(int nombre){
	main_ = copy(main_.begin(),main_.end(),back_inserter(this->partie_->piocher(nombre));
}

void Joueur::prendrePiece(int nombre){
	this->pieceOr_+=this->partie_->prendrePiece(nombre);
}

bool Joueur::construire(Quartier *quartier){
	int i=0;
	for(vector<Quartier*>::iterator it = main_.begin();it!=main_.end();++it){
		//TODO vérifier le test d'égalité
		if(((*it)->getNom()).compare(quartier->getNom())==0){//le quartier est dans notre main
			if(!cite_.estPresent(quartier)){
				if(quartier->getCout()<=pieceOr_){//on peut acheter le quartier
					cite_.ajouterQuartier(quartier);//on ajoute le quartier dans notre cité
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

void Joueur::choisirGainTour(){
    comportement->choisirGainTour(this);
}

int Joueur::decompteDesPoints(){
	int total = 0;
	for(vector<Quartier*>::iterator it = main_.begin();it!=main_.end();++it){
		total += (*it)->getPoints();
	}
	return total;
}

vector<Quartier*> Joueur::getMain(){
	return this->main_;

}

bool operator==(Joueur const& b){
    //Teste si a.pseudo == b.pseudo
    return this->pseudo==b.pseudo;
}
