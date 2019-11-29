#pragma once
#include <string>
#include <vector>
#include "Chambre.h"


class Hotel{
public:
	//Constuctors
	Hotel();
	Hotel(std::string id,std::string nom, std::string ville, std::vector<Chambre> chambre); //le dernier paramètre servira à rentrer 
																//directement les chambres que contient l'hotel dès l'initialisation
	
	//Getters
	std::string getId() const;
	std::string getNom() const;
	std::string getVille() const;
	std::vector<Chambre> getChambre() const;

	//Setters
	void setId(std::string id);
	void setNom(std::string nom);
	void setVille(std::string ville);
	void setChambre(std::vector<Chambre> chambre); //En paramètres un tableau contenant des chambres

	//Méthode pour ajouter une chambre
	void addChambre(Chambre chambre); 
	//Méthode pour ajouter un nombre -que l'utilisateur détermine- de chambres
	void addNChambres();

	//Affichage de toutes les chambres de l'hotel
	void affichage() const;


private:
	std::string m_id;
	std::string m_nom;
	std::string m_ville;
	std::vector<Chambre> m_chambres;
};