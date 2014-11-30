/*!
* \file Pioche.cpp
* \brief Fichier contenant l'implémentation de la classe Pioche
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
*/
Pioche::Pioche(int limiteOr=30) : reserveOr(limiteOr){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Pioche::~Pioche(){}

//--------------------------------------------------
/*!
* \brief Méthode qui remet une carte en dessous de la pioche
* \param carte les cartes remises dans la pioche
*/
void Pioche::ajouterCarte(Quartier* carte){
	cartes.push_back(carte);
}

//--------------------------------------------------
/*!
* \brief Méthode qui pioche des cartes
* \param nombre le nombre de cartes
* \return les cartes
*/
vector<Quartier*> Pioche::piocher(int nombre){
	vector<Quartier*> tmp;
	for(int i =0; i<nombre;i++){
		tmp.push_back(this->cartes.front());
		this->cartes.erase(this->cartes.begin());//supprime le premier élément
	}
	return tmp;
}

//--------------------------------------------------
/*!
* \brief Méthode qui remet des cartes en dessous de la pioche
* \param q les cartes remises
*/
void Pioche::defausserCarte(vector<Quartier*> quartiers){
	for ( vector<Quartier*>::iterator iter = quartiers.begin(); iter != quartiers.end(); iter++ ){
		this->cartes.push_back(&*iter);
	}
}

/*!
* \brief Méthode qui remet une carte en dessous de la pioche
* \param q la carte remise
*/
void Pioche::defausserCarte(Quartier * quartier){

		this->cartes.push_back(quartier);
}


//--------------------------------------------------
/*!
* \brief Méthode qui retire des pièces de la banque
* \param nombre le nombre de pièces
* \return les pièces
*/
int Pioche::prendrePiece(int nombre){
	if(reserveOr-nombre>=0){
		reserveOr = reserveOr-nombre;
		return nombre;
	}
	else{
		int tmp = reserveOr;
		reserveOr=0;
		return tmp;
	}
}
