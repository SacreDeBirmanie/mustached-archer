/*!
* \file Assassin.cpp
* \brief Fichier contenant l'implémentation de la classe Assassin
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/


Macchabee* Assassin::macchabee_ = new Macchabee();
//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param nom le nom
* \param ordre l'ordre dans lequel le personnage joue
* \param comp le comportement
*/
Assassin::Assassin(string nom, int ordre, ComportementMachine * comp):Personnage(nom,ordre,comp){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Assassin::~Assassin();

//--------------------------------------------------
/*!
* \brief Méthode qui assassine un personnage
* \param partie la partie
* \param perso le personnage que l'on souhaite assassiner
*/
void Assassin::assassiner(Partie * partie, Personnage * perso){
    Joueur * joueur = partie->retrouverJ(perso);
	partie->modifierOrdreJoueur(joueur);
	joueur->setComportement(Assassin::macchabee_);
}

