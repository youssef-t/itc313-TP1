
#include "Chambre.h"
#include <iostream>

int main(){
	Chambre chambre_a(10, Chambre::Double, 39.9); 
	// Double est déclaré dans une enum qui se trouve dans la clase Chambre. Il ne s'agit pas d'une variable globale 
	std::cout << "La chambre d'identifiant " << chambre_a.getId() << ": \n";
	std::cout << "\t -Type : " << chambre_a.getType() << "\t \t -Prix : "<< chambre_a.getPrix() << " euros \n" ;

	//Déclaration d'une chambre saisie au clavier
	Chambre chambre_b ;
	int help_id;
	int help_type;
	double help_prix;

	std::cout << "Entrer l'identifiant de la nouvelle chambre: " << std::endl;
	std::cin >> help_id ;
	chambre_b.setId(help_id);

	std::cout << "Entrer le type de la chambre (1- single/ 2- double/ 3- suite): " << std::endl;
	std::cin >> help_type;
	switch (help_type){
		case 1 : 
			chambre_b.setType(Chambre::Single);
			break;
		case 2 :
			chambre_b.setType(Chambre::Double);
			break;
		case 3 :
			chambre_b.setType(Chambre::Suite);
			break;
		default:
			std::cout << "Numéro saisi invalide. Le type de la chambre sera par défaut single" << std::endl;
			chambre_b.setType(Chambre::Single);
	}

	std::cout << "Entrer le prix de la chambre: " << std::endl;
	std::cin >> help_prix ;
	chambre_b.setPrix(help_prix);
	//Affichage des informations de la chambre 1

	std::cout << "La chambre d'identifiant " << chambre_b.getId() << ": \n";
	std::cout << "\t -Type : " << chambre_b.getType() << "\t \t -Prix : "<< chambre_b.getPrix() << " euros \n" ;
	return 0;
}