
#include "Chambre.h"
#include <iostream>

int main(){
	Chambre chambre_a(Double, 39.9); 
	// Double est déclaré dans une enum 
	std::cout << "La chambre d'identifiant " << chambre_a.getId() << ": \n";
	std::cout << "\t -Type : " << chambre_a.getType() << "\t \t -Prix : "<< chambre_a.getPrix() << " euros \n" ;// On peut utiliser la méthode affichage

	chambre_a.chambreModif(5,1,45); // 1 correspond à "single"
	std::cout << "[MODIFICATION] La chambre d'identifiant " << chambre_a.getId() << ": \n";
	std::cout << "\t -Type : " << chambre_a.getType() << "\t \t -Prix : "<< chambre_a.getPrix() << " euros \n" ;


	//Déclaration d'une chambre saisie au clavier
	Chambre chambre_b ;
	chambre_b.saisieClavier();
	chambre_b.affichage();

	return 0;
}