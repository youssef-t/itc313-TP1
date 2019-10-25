#pragma once
#include<iostream>

class Client{
public:
	Client(std::string name = "NONE", std::string prenom = "NONE");
	void setId(std::string id);
	void setNom(std::string nom);
	void setPrenom(std::string prenom);
	void setNbrReservation(int nbr_reservation);
	int getNbrReservation();
	std::string getNom();
	std::string getPrenom();
	std::string getId();
	
private:
	std::string m_id;
	std::string m_nom;
	std::string m_prenom;
	int m_nbr_reservation;

};