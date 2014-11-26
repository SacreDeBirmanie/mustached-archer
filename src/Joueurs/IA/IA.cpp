IA::IA(){

}

void IA::setComportement(Personnage *p){
	comportement_ = p->getComportementIA();
}
