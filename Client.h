#pragma once

class Client{
public:
	Client(char name=NONE, char prenom=NONE, int nbr_reservation=1);
	void setId(std::string id);
	void setNom(std::string nom);
	void setPrenom(std::string prenom);
	void setNbrReservation(int nbr_reservation);
	int getNbrReservation();
	std::string getNom();
	std::string getPrenom();
	
private:
	int m_id;
	std::string m_nom;
	std::string m_prenom;
	int m_nbr_reservation;

};