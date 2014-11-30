FabriquePersonnage::FabriquePersonnage(){

}

Personnage * FabriquePersonnage::FabriquePersonnage::creerAssassin(){
	return new Assassin("Assassin",1,new ComportementAssassinMachine);
}

Personnage * FabriquePersonnage::creerVoleur(){
	return new Voleur("Voleur",1,new ComportementVoleurMachine);
}

Personnage * FabriquePersonnage::creerMagicien(){
	return new Magicien("Magicien",1,new ComportementMagicienMachine);
}

Personnage * FabriquePersonnage::creerRoi(){
	return new Roi("Roi",1,new ComportementRoiMachine);
}

Personnage * FabriquePersonnage::creerEveque(){
	return new Eveque("Eveque",1,new ComportementEvequeMachine);
}

Personnage * FabriquePersonnage::creerMarchand(){
	return new creerMarchand("creerMarchand",1,new ComportementcreerMarchandMachine);
}

Personnage * FabriquePersonnage::creerArchitecte(){
	return new Architecte("Architecte",1,new ComportementArchitecteMachine);
}

Personnage * FabriquePersonnage::creerCondottiere(){
	return new Condottiere("Condottiere",1,new ComportementCondottiereMachine);
}