//identifiant unique 
#include <iostream>
#include <string>

int identifiant_auto_int(){
	static int index=0;
	index++ ;
	return index-1;
}

static std::string identifiant_auto_str(){
	static int index=0;
	index++;
	return "HOTEL" + std::to_string(index-1);
}
static std::string indentifiant_auto_str()

int main(){
	std::cout << "Résultat: " << identifiant_auto_int() << std::endl; 
	std::cout << "Résultat: " << identifiant_auto_int() << std::endl; 
	std::cout << "Résultat: " << identifiant_auto_int() << std::endl; 
	std::cout << "Résultat: " << identifiant_auto_str() << std::endl; 
	std::cout << "Résultat: " << identifiant_auto_str() << std::endl; 
	std::cout << "Résultat: " << identifiant_auto_str() << std::endl; 


}