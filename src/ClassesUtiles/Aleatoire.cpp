/** \file Aleatoire.hpp
* \bref Définition du type Aleatoire
*
* Classe qui définit la classe Aleatoire
*/

#include <cstdlib>
#include <ctime>

class Aleatoire{


	protected :



	public :
		//! Le constructeur
		Aleatoire(){}

		static int tirerEntier(int deb = 0, int fin = 32767){
			srand(time(NULL)); // initialisation de rand
				return rand()%(fin-deb+1) + deb;
		}
		
		static int tirerEntierAvecExclusion(int deb = 0, int fin = 32767, vector<int> exclusion){
				srand(time(NULL)); // initialisation de rand
				int nombre_aleatoire = rand()%(fin-deb+1) + deb;
			
				while(exclusion.find(nombre_aleatoire)){
					nombre_aleatoire = rand()%(fin-deb+1) + deb;
				}
				
				return nombre_aleatoire;
				
		}
};


