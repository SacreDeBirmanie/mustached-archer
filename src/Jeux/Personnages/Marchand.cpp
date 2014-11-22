/*!
 * \file Marchand.cpp
 * \brief Classe Marchand qui hérite de personnage
 * \author François Hallereau & Sébastien Vallée
 */


/*!
 * \brief Méthode qui défini la capacité du marchand
 * Gagne une pièce d'or en plus
 * Chaque quartier marchand lui rapporte une pièce d'or
 */
void Marchand::capacite(){	
	int po=0;	
	vector<Quartier> cite = joueur->getCite();
	for(vector<Quartier>::iterator it = cite.begin();it!=cite.end();++it){
		if(*it.estMarchand()) //si le quartier est marchand, +1 pièce
			++po;
	}
	++po; //la pièce bonus
	joueur->prendrePiece(po);
}

