#include "Chambre.h" //la bibliothèque string est incluse dans Chambre.h
#include <iostream>
//constructeur par défaut => identifiant automatique et unique
Chambre::Chambre():m_id( identifiant_auto_int() ){

}

Chambre::Chambre(Type type, double prix) : m_id( identifiant_auto_int()),m_type(type), m_prix(prix) {

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

void Chambre::chambreModif(int id, int type, double prix){
	setId(id);
	setType(type);
	setPrix(prix);
}

void Chambre::saisieClavier(){
	int help_id;
	std::cout << "Entrer l'identifiant de la chambre : " << std::endl;
	std::cin >> help_id ;
	//setId(help_id); 

	int help_type; //un test sera exécuté sur help_type (le test fait partie du getter) 
	//il faut qu'elle prenne l'une des valeurs: 1,2,3 sinon elle prendra par défaut la valeur 1 qui correspond au type "single"
	std::cout << "Entrer le type de la chambre (1- single/ 2- double/ 3- suite): " << std::endl;
	std::cin >> help_type;
	//setType(help_type);

	double help_prix;
	std::cout << "Entrer le prix de la chambre : "<< std::endl;
	std::cin >> help_prix ;
	//setPrix(help_prix);

	chambreModif(help_id, help_type, help_prix); //au lieu d'écrire les trois setters
}

void Chambre::affichage() const{
	std::cout << "La chambre d'identifiant " << getId() << ": \n";
	std::cout << "\t -Type : " << getType() << "\t \t -Prix : "<< getPrix() << " euros \n" ;
}

int Chambre::getId() const {
	return m_id;
}

std::string Chambre::getType() const{  //getType permet de donner le type de la chambre en string au lieu d'un entier
	return type_chambre[m_type];
}

double Chambre::getPrix() const {
	return m_prix;
}

int Chambre::identifiant_auto_int(){
	static int index=0;
	index++ ;
	return index-1;
}

