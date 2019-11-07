#include <iostream>
#include "Hotel.h"

int main(){
	//Chambre chambres[2];
	
	std::vector<Chambre> chambres;
	Chambre chambre_help(1, Chambre::Double, 29.9);
	chambres.push_back(chambre_help);
	chambre_help.chambreModif(2,2, 49.9); //modification du contenu de la variable => Identifiant 2, type 1:Single 2:Double 3:Suite, prix 49.9
	chambres.push_back(chambre_help); //deux chambres ont été ajoutées au vecteurs

	//Hotel::Hotel(std::string id,std::string nom, std::string ville, std::vector<Chambre> chambre)
	Hotel hotel("HID5","Ibis","Dijon",chambres); //initialisation avec le constructeur




	return 0;
}