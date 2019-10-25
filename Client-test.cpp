#include "Client.h"
#include <iostream>

using namespace std;

int main(){
	string T;
	Client client;
	int nbr_reservation
	cout<<"Entrer le nom du client"<<endl;
	cin>>T;
	client.setNom(T);
	cout<<"Entrer le prénom du client"<<endl;
	cin>>T;
	client.setPrenom(T);
	cout<<"Entrer un identifiant pour l'utilisateur"<<endl;
	cin>>T;	
	client.setId(T);
	cout<<"Les informations du client sont: "
	cout<<"\t identifiant: "<< client.getId();
	cout<<"\t Prenom: "<< client.getPrenom();
	cout<<"\t Nom: "<< client.getNom();
	//Juste pour tester les méthodes concernant le nombre de réservations
	cout<<"Entrer le nombre de réservations "<< endl;
	cin>>nbr_reservation;
	client.setNbrReservation(nbr_reservation);
	cout<<"Le nombre de réservations du client d'identifiant "<<client.getId<<" est: "<<client.getNbrReservation()<<endl;

	return 0;
}