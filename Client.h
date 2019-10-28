#pragma once
#include<string>

class Client{
public:
	Client(std::string nom, std::string prenom, int id ,int nbr_reservation=1);
	Client();

	void setId(int id) ;
	void setNom(std::string nom) ;
	void setPrenom(std::string prenom) ;
	void setNbrReservation(int nbr_reservation);
	
	int getNbrReservation() const;
	std::string getNom() const;
	std::string getPrenom() const;
	int getId() const;
	
private:
	std::string m_nom;
	std::string m_prenom;
	int m_id;
	int m_nbr_reservation;

};