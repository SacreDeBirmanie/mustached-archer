FabriquePersonnage::FabriquePersonnage(){

}

Personnage * FabriquePersonnage::FabriquePersonnage::creerAssassin(){
	return new Assassin("Assassin",1,new ComportementAssassinMachine());
}

Personnage * FabriquePersonnage::creerVoleur(){
	return (new Voleur("Voleur",2,new ComportementVoleurMachine(), new EstVole()));
}

Personnage * FabriquePersonnage::creerMagicien(){
	return new Magicien("Magicien",3,new ComportementMagicienMachine());
}

Personnage * FabriquePersonnage::creerRoi(){
	return new Roi("Roi",4,new ComportementRoiMachine());
}

Personnage * FabriquePersonnage::creerEveque(){
	return new Eveque("Eveque",5,new ComportementEvequeMachine());
}

Personnage * FabriquePersonnage::creerMarchand(){
	return new Marchand("creerMarchand",6,new ComportementMarchandMachine());
}

Personnage * FabriquePersonnage::creerArchitecte(){
	return new Architecte("Architecte",7,new ComportementArchitecteMachine());
}

Personnage * FabriquePersonnage::creerCondottiere(){
	return new Condottiere("Condottiere",8,new ComportementCondottiereMachine());
}
