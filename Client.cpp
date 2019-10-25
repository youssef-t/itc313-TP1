#include "Client.h"

Client::Client(std::string name, std::string prenom) : m_nom(name), m_prenom(prenom){
}
	
void Client::setId(std::string id){
	m_id = id;
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

std::string Client::getNom(){
	return m_nom;
}

std::string Client::getPrenom(){
	return m_prenom;
}

std::string Client::getNbrReservation(){
	return m_nbr_reservation;
}
