#include "Client.h"
#include <string>
Client::Client(std::string name, std::string prenom) : m_nom(name), m_prenom(prenom){
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