#include <iostream>
#include "Date.h"

Date::Date(int day,int month,int year) : m_day(day), m_month(month), m_year(year){
}

void Date::setDay(int day){
	if ( day > 0 && day < 32)
		m_day = day;
	else
		std::cout<<"Error: day out of range (default value is 1) \n";
}

void Date::setMonth(int month){
	if( month < 0 && month <13)
		m_month = month;
	else
		std::cout<<"Error: month out of range (default value is 1) \n";
}

void Date::setYear(int year){
	if ( year >= 2019)
		m_year = year;
	else
		std::cout<<"Error: year out of range (default value is 2019)\n";
}

void Date::modifDate(int date, int month, int year){
	setDay(date);
	setMonth(month);
	setYear(year);
}

int Date::getYear() const{
	return m_year;
}

int Date::getMonth() const{
	return m_month;
}

int Date::getDay() const{
	return m_day;
}

