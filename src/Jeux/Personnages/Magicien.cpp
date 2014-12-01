/*!
* \file Magicien.cpp
* \brief Fichier contenant l'implémentation de la classe Magicien
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Constructeur de la classe
* \param nom le nom
* \param ordre l'ordre dans lequel le personnage joue
* \param comp le comportement
*/

Magicien::Magicien(string nom, int ordre, ComportementMachine* comp): Personnage(nom,ordre, comp){}

//--------------------------------------------------
/*!
* \brief Destructeur de la classe
*/
Magicien::~Magicien(){}

//--------------------------------------------------
/*!
* \brief Méthode qui permet d'échanger les mains de 2 joueurs
* \param magicien le joueur qui controle le magicien
* \param vole celui que se fait prendre sa main
*/
void Magicien::echangerMainContreJoueur(Joueur* magicien,Joueur* vole){
	vector<Quartier*> tmp = vole->getMain();
	vole->setMain(magicien->getMain());
	magicien->setMain(tmp);
}

//--------------------------------------------------
/*!
* \brief Méthode qui permet d'échanger des cartes de sa main avec la pioche
* \param cartes les cartes à échanger
* \param joueur le joueur qui controle le magicien
*/
void Magicien::echangerMainContrePioche(vector<Quartier*> cartes, Joueur* joueur){
	int n = cartes.size();
	joueur->defausser(cartes);
	joueur->piocher(n);
}
