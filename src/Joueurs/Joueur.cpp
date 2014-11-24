/*!
 * \file Joueur.cpp
 * \brief La classe Joueur
 * \author François Hallereau & Sébastien Vallée
 */


Joueur::Joueur(string p): pseudo(p){}

Joueur::~Joueur(){}

string Joueur::getPseudo(){
	return pseudo_;
}

Comportement Joueur::getComportement(){
	return comportement_;
}

void Joueur::choisirPersonnage(Partie p, vector<Personnage> persosDispo){
	this->comportement.choisirPersonnage(p,persosDispo,this);
}
void Joueur::jouer(Partie p){
	this->comportement->jouer(p,this);
}

void Joueur::piocher(int nombre){}

void Joueur::prendrePiece(int nombre){
	this->pieceOr_+=this->partie.prendrePiece();
}

bool Joueur::construire(Quartier quartier){
	int i=0;
	for(vector<Quartier>::iterator it = main.begin();it!=main.end();++it){
		//TODO vérifier le test d'égalité
		if((&*it.getNom()).compare(quartier.getNom())==0){//le quartier est dans notre main 
			if(quartier.getCout()<=pieceOr_){//on peut acheter le quartier
				cite_.push_back(quartier);//on ajoute le quartier dans notre cité
				main_.erase(main_.begin()+i);//on enlève le quartier de notre main
				return true;
			}
			else
				return false;
		}
		++i;
	}
	return false;	
}

int Joueur::decompteDesPoints(){
	int total = 0;
	for(vector<Quartier>::iterator it = main.begin();it!=main.end();++it){
		total += *it.getPoint();
	}
	return total;
}

Vector<Quartier*> getMain(){
	return this->main_;

}
