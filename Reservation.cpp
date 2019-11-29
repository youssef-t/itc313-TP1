#include "Reservation.h" // Reservation.h contient Date.h et Hotel.h

class Reservation{
public:
	Reservation::Reservation(){

	}

	Reservation(Date date_debut, Date date_fin, std::string id_hotel, int id_chambre, int id_client):
	m_date_debut(date_debut),
	m_date_fin(date_fin),
	m_id_hotel(id_hotel),
	m_id_chambre(id_chambre),
	m_id_client(id_client)
	{

	}

	//Getters
	int getId()const{return m_id;}
	Date getDateDebut()const{return m_date_debut;}
	Date getDateFin()const{return m_date_fin;}
	std::string getIdHotel()const {return m_id_hotel;}
	int getIdChambre()const {return m_id_chambre;}
	int getIdClient()const {return m_id_client;}
	double getMontantTotal()const{return m_montant_total;}

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