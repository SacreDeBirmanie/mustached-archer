/*!
* \file ComportementMachine.hpp
* \brief Fichier contenant les entêtes de la classe ComportementMachine
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef COMPORTEMENTMACHINE_HPP
#define COMPORTEMENTMACHINE_HPP

//--------------------------------------------------
/*!
* \class ComportementMachine
* \brief Classe gérant le comportement machine
*/
class ComportementMachine : public Comportement{


	private :



	public :
		ComportementMachine();//constructeur de la classe ComportementMachine
		~ComportementMachine();
		virtual void jouer(Partie * p, Joueur * j)=0;

	protected :
		void choisirPersonnage(Partie * p, vector<Personnage*> persosDispo,Joueur * j);
		void choisirGainTour(Joueur *j);
		void choisirConstruction(Joueur * j);

};

/******************************************************************************/
#endif // COMPORTEMENTMACHINE_HPP
