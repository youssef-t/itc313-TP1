#pragma once
#include <string>

class Chambre{
public:
	enum Type{
		Single = 0 , Double, Suite	
	};

	Chambre();
	Chambre(int id, Type type, double m_prix);

	void setId(int id);
	void setType(Type type);
	void setPrix(double prix);

	//void affichageTypeDisponible();

	int getId();
	std::string getType();
	double getPrix();

	
	std::string type_chambre[3] = {"Single","Double","Suite"}; //permettre la conversion de type qui est "int" à string
private:
	int m_id;
	Type m_type;
	double m_prix;
};