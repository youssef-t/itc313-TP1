#pragma once
#include<string>

class Client{
public:
	Client();
	Client(std::string nom, std::string prenom ,int nbr_reservation=1);
	//Client(std::string nom, std::string prenom, int nbr_reservation=1);

	// Les setters permettront d'entrer les informations du client ou de les modifier
	void setId(int id) ;
	void setNom(std::string nom) ;
	void setPrenom(std::string prenom) ;
	void setNbrReservation(int nbr_reservation);
	
	int getNbrReservation() const;
	std::string getNom() const;
	std::string getPrenom() const;
	int getId() const;

	void affichage() const;
	
private:
	std::string m_nom;
	std::string m_prenom;
	int m_id;
	int m_nbr_reservation;
	int identifiant_auto_int();

};