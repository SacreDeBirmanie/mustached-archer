/**
*   Fichier Observer.hpp
*   \brief Définition du type Observer
*/

#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Observer
{
public:
	virtual void update(int taille) = 0;
};


/******************************************************************************/
#endif // OBSERVER_HPP
