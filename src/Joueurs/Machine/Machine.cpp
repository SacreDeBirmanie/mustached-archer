/*!
* \file Machine.cpp
* \brief Fichier contenant l'implémentation de la classe Machine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param pseudo le pseudo du joueur
* \param partie la partie en cours
*/
Machine::Machine(string pseudo,Partie * partie) : Joueur(pseudo,partie){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Machine::~Machine();

void Machine::setComportement(Personnage *p){
	comportement_ = p->getComportementMachine();
}

//--------------------------------------------------
/*!
* \brief Méthode qui fait jouer le joueur
*/
void Machine::jouer(){
    comportement_->jouer(partie_,this);

}

//--------------------------------------------------
/*!
* \brief Méthode qui fait choisir un personnage
* \param persosDispo les personnages disponibles
*/
void Machine::choisirPersonnage(vector<Personnage*> persosDispo){
	int nb = Aleatoire::tirerEntier(0,persosDispo.size());
	partie_->associer(persosDispo.at(nb),this);
}
