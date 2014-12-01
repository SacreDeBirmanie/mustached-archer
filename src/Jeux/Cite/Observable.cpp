/*!
* \file Observable.cpp
* \brief Fichier contenant l'implémentation de la classe Observable
* \author François Hallereau
* \author Sébastien Vallée
* \date 12.2014
*/

//--------------------------------------------------
/*!
* \brief Méthode qui notifie les observers d'une mise à jour
* \param taille la taille de la cité
*/
void Observable::notify(int taille){
	taille_=taille;
	for(vector<Observer*>::iterator observers = list_observers.begin();observers != list_observers.end(); ++observers){
		(*observers)->update(taille_);
	}
}

//--------------------------------------------------
/*!
* \brief Méthode qui ajoute un observer à la liste
* \param observer l'observer
* \return vrai si l'observer a été ajouté
*/ 
bool Observable::addObserver(Observer* observer){
	if(!list_observers.empty()){
		for(vector<Observer*>::iterator ob = list_observers.begin();ob != list_observers.end(); ++ob){
			if((*ob)==observer){
				return false;
			}
		}
	}
	list_observers.push_back(observer);
	return true;
}

//--------------------------------------------------
/*!
* \brief Méthode qui supprime un observer de la liste
* \param observer l'observer
* \return vrai si l'observer a été supprimer
*/ 
bool Observable::removeObserver(Observer* observer){
	if(!list_observers.empty()){
		for(vector<Observer*>::iterator ob = list_observers.begin();ob != list_observers.end(); ++ob){
			if((*ob)==observer){
				list_observers.erase(ob);
				return true;
			}
		}
	}
	return false;
}
