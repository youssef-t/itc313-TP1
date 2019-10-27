#pragma once
#include<string>

class Client{
public:
	Client(std::string name, std::string prenom );
	
	void setId(int id) ;
	void setNom(std::string nom) ;
	void setPrenom(std::string prenom) ;
	void setNbrReservation(int nbr_reservation);
	
	int getNbrReservation() const;
	std::string getNom() const;
	std::string getPrenom() const;
	int getId() const;
	
private:
	int m_id;
	std::string m_nom;
	std::string m_prenom;
	int m_nbr_reservation;

};