#include <iostream>
#include "Date.h"

using namespace std;

int main(){
	int day, month, year;
	Date date;
	cout<<"Entrer une date de réservation (jour puis mois puis année): "<<endl;
	cin>>day;
	cin>>month;
	cin>>year;
	date.modifDate(day,month,year); //La date est par défaut: 1 1 2019, on modifie la variabledate
	cout<<"La date de votre résérvation est: \n";
	cout<<"\t Le jour: "<<date.getDay()<<endl;
	cout<<"\t Le mois: "<<date.getMonth()<<endl;
	cout<<"\t L'année: "<<date.getYear()<<endl;
}
