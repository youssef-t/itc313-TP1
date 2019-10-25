#pragma once

class Client{
public:
	Client(char name=NONE, char prenom=NONE, int nbr_reservation=1);
	void setId(std::string id);
	void setNom(std::string nom);
	void setPrenom(std::string prenom);
	std::string getNom();
	std::string getPrenom();
	int getNbrReservation();
	int incrementReservation();
private:
	int m_id;
	std::string m_nom;
	std::string m_prenom;
	int m_nbr_reservation;

};