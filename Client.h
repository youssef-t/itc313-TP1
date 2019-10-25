#pragma once

class Client{
public:
	Client(char name, char prenom, int nbr_reservation);
	void setId(std::string id);
	void setNom(std::string nom);
	void setPrenom(std::string prenom);
	std::string getNom();
	std::string getPrenom();
	int getNbrReservation();

private:
	int m_id;
	std::string m_nom;
	std::string m_prenom;
	int m_nbr_reservation;

};