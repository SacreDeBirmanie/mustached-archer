/**
*   Fichier Observable.cpp
*   \brief Définition du type Observable
*/

void notify(int taille) const{
	for(vector<Observer*>::const_iterator observers = list_observers.begin();observers != list_observers.end(); ++observers){
		(*observers)->update(data);
	}
}
 
void addObserver(Observer* observer){
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
 
void removeObserver(Observer* observer){
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
