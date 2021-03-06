#pragma once
#include <string>

enum Type{
		Single = 0 , Double, Suite	// 0 est juste pour que ça soit mieux précisé que l'enum commence par 0
	};

class Chambre{
public:
	
	Chambre();
	Chambre(Type type, double prix);
	Chambre(int id, Type type, double prix);

	//Les setters permettront la saisie des informations sur la chambre ou de les modifier
	void setId(int id);
	void setType(int type); //On fera le test de "type" dans la fonction au lieu de juste déclarer que "type" est une enum "Type"
	void setPrix(double prix);

	int getId() const;
	std::string getType() const; //il est plus pratique que getType retourne le type de la chambre en string au lieu d'un nombre 
	double getPrix() const;

	void chambreModif(int id, int type, double prix);
	void saisieClavier();
	void affichage() const;

	std::string type_chambre[3] = {"Single","Double","Suite"}; //permettre la conversion du type de la chambre qui est "int" à string
private:
	int identifiant_auto_int();
	int m_id;
	Type m_type;
	double m_prix;
};