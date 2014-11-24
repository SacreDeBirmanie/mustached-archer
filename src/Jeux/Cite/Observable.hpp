/**
*   Fichier Observable.hpp
*   \brief Définition du type Observable
*/

#ifndef OBSERVABLE_HPP
#define OBSERVABLE_HPP

public class Observable{
	
private:
	vector<Observer*> list_observers;
 
public:

	void notify(int taille) const;
	bool addObserver(Observer* observer);
	bool removeObserver(Observer* observer);

};


/******************************************************************************/
#include "Observable.cpp"
#endif // OBSERVABLE_HPP