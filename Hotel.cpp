#include "Hotel.h" //les bibliothèques <vector>,<string>,"Chambre" sont incluses dans "Hotel.h"
#include <iostream>
Hotel::Hotel(){

}

Hotel::Hotel(std::string id,std::string nom, std::string ville, std::vector<Chambre> chambre): 
m_id(id),
m_nom(nom),
m_ville(ville),
m_chambres(chambre){

}

std::string Hotel::getId() const{
	return m_id; 
}

std::string Hotel::getNom() const{
	return m_nom;
}

std::string Hotel::getVille() const{
	return m_ville;
}

std::vector<Chambre> Hotel::getChambre() const{
	return m_chambres;
}


void Hotel::setId(std::string id){
	m_id = id;
}

void Hotel::setNom(std::string nom){
	m_nom = nom;
}

void Hotel::setVille(std::string ville){
	m_ville = ville;
}

void Hotel::setChambre(std::vector<Chambre> chambre){
	for (long unsigned int i=0; i<chambre.size(); i++) 
		m_chambres.push_back(chambre[i]);
    	     
}

void Hotel::addChambre(Chambre chambre){
	m_chambres.push_back(chambre);
} 

void Hotel::addNChambres(){
	long unsigned int N;
	std::cout << "Entrer le nombre de chambres: "<< std::endl;
	std::cin >> N;
	Chambre chambre;
	for(long unsigned int i=0; i<N; i++){
		chambre.saisieClavier(); //Saisir les informations de la chambre à partir du clavier
		addChambre(chambre);  // équivalent à: m_chambres.push_back(chambre);
	}
}
