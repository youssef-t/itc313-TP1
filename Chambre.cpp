#include "Chambre.h" //la bibliothèque string est incluse dans Chambre.h
#include <iostream>
Chambre::Chambre(){

}

Chambre::Chambre(int id, Type type, double prix): m_id(id), m_type(type), m_prix(prix){

}

void Chambre::setId(int id){
	m_id = id;
} 

void Chambre::setType(int type){
	switch (type){
		case 1 : 
			m_type = Single ;
			break;
		case 2 :
			m_type = Double ;
			break;
		case 3 :
			m_type = Suite ;
			break;
		default:
			std::cout << "ERREUR: Valeur invalide. Le type de la chambre sera par défaut single." << std::endl;
			m_type = Single ;
	}
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
