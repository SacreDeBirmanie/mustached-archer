/**
*   Fichier Observable.cpp
*   \brief Définition du type Observable
*/

void Observable::notify(int taille){
	for(vector<Observer*>::iterator observers = list_observers.begin();observers != list_observers.end(); ++observers){
		(*observers)->update(taille);
	}
}
 
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
