#include <iostream>
#include "Hotel.h"

int main(){
	//Chambre chambres[2];
	
	std::vector<Chambre> chambres;
	Chambre chambre_help(1, Chambre::Double, 29.9);
	chambres.push_back(chambre_help);
	chambre_help.chambreModif(2,2, 49.9); //modification du contenu de la variable => Identifiant 2, type 1:Single 2:Double 3:Suite, prix 49.9
	chambres.push_back(chambre_help); //deux chambres ont été ajoutées au vecteurs

	//Hotel::Hotel(std::string nom, std::string ville, std::vector<Chambre> chambre)
	Hotel hotel1("Ibis","Dijon",chambres); //initialisation avec le constructeur
	hotel1.affichage();
	Hotel hotel2("Ibis","Paris",chambres); //initialisation avec le constructeur et vérification que l'id est unique
	hotel2.affichage();
	hotel2.addNChambres(); //Ajout de N chambres (que l'utilisateur précise)
	hotel2.affichage();



	return 0;
}