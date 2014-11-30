/*!
* \file Observable.hpp
* \brief Fichier contenant les entêtes de la classe Observable
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

#ifndef OBSERVABLE_HPP
#define OBSERVABLE_HPP

//--------------------------------------------------
/*!
* \class Observable
* \brief Classe implémentant le Pattern Observer
*/
class Observable{
	
private:
	vector<Observer*> list_observers;//!< liste des Observers
 
public:
	void notify(int taille);
	bool addObserver(Observer* observer);
	bool removeObserver(Observer* observer);

};


/******************************************************************************/
#include "Observable.cpp"
#endif // OBSERVABLE_HPP
