#include "Client.h"
#include <iostream>

Client::Client(std::string name, std::string prenom) : m_nom(name), m_prenom(prenom){
}
	
Client::setId(std::string id){
	m_id = id;
}

Client::setNom(std::string nom){
	m_nom = nom ;
}

Client::setPrenom(std::string prenom){
	m_prenom = prenom;
}

Client::setNbrReservation(int nbr_reservation ){
	m_nbr_reservation = nbr_reservation;
}

Client::getNom(){
	return m_nom;
}

Client::getPrenom(){
	return m_prenom;
}

Client::getNbrReservation(){
	return m_nbr_reservation;
}
