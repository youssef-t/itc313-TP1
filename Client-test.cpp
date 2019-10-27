#include "Client.h" // La bibliothèque string est incluse dans "Client.h"
#include <iostream>

int main(){
	std::string T;
	Client client;
	int help_number ;
	std::cout << "Entrer le nom du client"<<std::endl;
	std::cin >> T;
	client.setNom(T);
	std::cout << "Entrer le prénom du client"<<std::endl;
	std::cin >> T;
	client.setPrenom(T);
	std::cout << "Entrer un identifiant pour l'utilisateur"<<std::endl;
	std::cin >> help_number;	
	client.setId(help_number);
	std::cout<<"Entrer le nombre de réservations "<< std::endl;
	std::cin>>help_number;
	client.setNbrReservation(help_number);
	std::cout << "Les informations du client sont: " << std::endl;
	std::cout<<"\t Identifiant: "<< client.getId() << std::endl;
	std::cout<<"\t Prenom: "<< client.getPrenom() << std::endl;
	std::cout<<"\t Nom: "<< client.getNom() << std::endl ;
	std::cout<<"\t Son nombre de réservations: " << client.getNbrReservation()<<std::endl;

	//Juste pour tester les méthodes concernant le nombre de réservations
	
	Client client_test("John","Jack",234);
	std::cout << "Les informations du client sont: " << std::endl;
	std::cout<<"\t Identifiant: "<< client_test.getId() << std::endl;
	std::cout<<"\t Prenom: "<< client_test.getPrenom() << std::endl;
	std::cout<<"\t Nom: "<< client_test.getNom() << std::endl ;
	std::cout<<"\t Son nombre de réservations: " << client_test.getNbrReservation()<<std::endl;
	return 0;
}