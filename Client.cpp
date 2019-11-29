#include "Client.h" //la bibliothèque string est incluse dans Client.h
#include <iostream>
Client::Client(std::string nom, std::string prenom, int nbr_reservation) : m_nom(nom), m_prenom(prenom), m_id(identifiant_auto_int()) ,m_nbr_reservation(nbr_reservation){

}

Client::Client():m_id(identifiant_auto_int()){

}
void Client::setId(int id){
	m_id = id ;
}

void Client::setNom(std::string nom){
	m_nom = nom ;
}

void Client::setPrenom(std::string prenom){
	m_prenom = prenom;
}

void Client::setNbrReservation(int nbr_reservation ){
	m_nbr_reservation = nbr_reservation;
}

std::string Client::getNom() const{
	return m_nom;
}

std::string Client::getPrenom() const{
	return m_prenom;
}

int Client::getNbrReservation() const{
	return m_nbr_reservation;
}

int Client::getId() const {
	return m_id;
}

void Client::affichage() const{
	std::cout << "Les informations du client sont: " << std::endl;
	std::cout<<"\t Identifiant: "<< getId() << std::endl;
	std::cout<<"\t Prenom: "<< getPrenom() << std::endl;
	std::cout<<"\t Nom: "<< getNom() << std::endl ;
	std::cout<<"\t Son nombre de réservations: " << getNbrReservation()<<std::endl;
}

int Client::identifiant_auto_int(){
	static int index=0;
	index++ ;
	return index-1;
}

