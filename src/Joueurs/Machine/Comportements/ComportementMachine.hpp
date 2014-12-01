/**
*   Fichier ComportementMachine.hpp
*   \brief Définition du type ComportementMachine
*/

#ifndef COMPORTEMENTMACHINE_HPP
#define COMPORTEMENTMACHINE_HPP

class ComportementMachine : public Comportement{


	private :



	public :
		ComportementMachine();//constructeur de la classe ComportementMachine
		void jouer(Partie * p, Joueur * j);

	protected :
		void choisirPersonnage(Partie * p, vector<Personnage*> persosDispo,Joueur * j);
		void choisirGainTour(Joueur *j);
		void choisirConstruction(Joueur * j);

};

/******************************************************************************/
#endif // COMPORTEMENTMACHINE_HPP
