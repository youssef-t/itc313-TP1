
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
	//un test sera exécuté sur help_type (le test fait partie du getter) 
	//il faut qu'elle prenne l'une des valeurs: 1,2,3 sinon elle prendra par défaut la valeur 1 qui correspond au type "single"
	double help_prix;

	std::cout << "Entrer l'identifiant de la nouvelle chambre: " << std::endl;
	std::cin >> help_id ;
	chambre_b.setId(help_id);

	std::cout << "Entrer le type de la chambre (1- single/ 2- double/ 3- suite): " << std::endl;
	std::cin >> help_type;
	chambre_b.setType(help_type);

	std::cout << "Entrer le prix de la chambre: " << std::endl;
	std::cin >> help_prix ;
	chambre_b.setPrix(help_prix);
	
	//Affichage des informations de la chambre_b

	std::cout << "La chambre d'identifiant " << chambre_b.getId() << ": \n";
	std::cout << "\t -Type : " << chambre_b.getType() << "\t \t -Prix : "<< chambre_b.getPrix() << " euros \n" ;
	return 0;
}