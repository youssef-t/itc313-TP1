#include "Chambre.h" //la bibliothèque string est incluse dans Chambre.h
#include <iostream>
Chambre::Chambre(){

}

Chambre::Chambre(int id, Type type, double prix): m_id(id), m_type(type), m_prix(prix){

}

void Chambre::setId(int id){
	m_id = id;
} 

void Chambre::setType(Type type){
	m_type = type;
} 

void Chambre::setPrix(double prix){
	if (prix > 0)
		m_prix = prix;
	else
		std::cout << "Erreur: prix invalide" << std::endl;
}

/*void Chambre::affichageTypeDisponible(){
	for(int i=0;  type_chambre)
		std::cout << 
} */

int Chambre::getId() const {
	return m_id;
}

std::string Chambre::getType() const{  //getType permet de donner le type de la chambre en string au lieu d'un entier
	return type_chambre[m_type];
}

double Chambre::getPrix() const {
	return m_prix;
}
