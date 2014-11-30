/*!
* \file Observer.hpp
* \brief Fichier contenant les entêtes de la classe Observer
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
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
