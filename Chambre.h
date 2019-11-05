#pragma once
#include <string>


class Chambre{
public:
	enum Type{
		Single = 0 , Double, Suite	// 0 est juste pour que ça soit mieux précisé que l'enum commence par 0
	};

	Chambre();
	Chambre(int id, Type type, double m_prix);

	void setId(int id);
	void setType(Type type);
	void setPrix(double prix);

	int getId() const;
	std::string getType() const; //il est plus pratique que getType retourne le type de la chambre en string au lieu d'un nombre 
	double getPrix() const;

	std::string type_chambre[3] = {"Single","Double","Suite"}; //permettre la conversion du type de la chambre qui est "int" à string
private:
	int m_id;
	Type m_type;
	double m_prix;
};