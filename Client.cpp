#include "Client.h"
#include <iostream>

Client::Client(std::string name, std::string prenom) : m_nom(default_name), m_prenom(), m_nbr_reservation {
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

Client::getNom(){
	return m_nom;
}

Client::getPrenom(){
	return m_prenom;
}

Client::getNbrReservation(){
	return m_nbr_reservation;
}
