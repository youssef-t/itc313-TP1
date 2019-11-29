#pragma once

#include "Date.h"
#include "Hotel.h"
#include <string>

class Reservation{
public:
	Reservation();
	Reservation(Date date_debut, Date date_fin, std::string id_hotel, int id_chambre, int id_client);

	//Getters
	int getId() const;
	Date getDateDebut()const;
	Date getDateFin()const;
	std::string getIdHotel()const;
	int getIdChambre()const;
	int getIdClient()const;
	double getMontantTotal()const;

	//Setters
	void setId(int id);
	void setDateDebut();
	void setDateFin();
	void setIdHotel();
	void setIdChambre();
	void setIdClient();

	//calcul montant total
	double calculMontantTotal();
private:
	int m_id;
	Date m_date_debut;
	Date m_date_fin;
	std::string m_id_hotel;
	int m_id_chambre;
	int m_id_client;
	double montant_total;

}