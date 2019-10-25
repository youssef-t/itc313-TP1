#ifndef _DATE_H
#define _DATE_H

class Date {
public:
	Date(int day=1,int month=1,int year=2019); //constructor with a default date value 1 1 2019
	
	int getYear();
	int getMonth();
	int getDay();

	void setYear(int year);
	void setMonth(int month);
	void setDay(int day); 

	void modifDate(int day,int month,int year);
private:
	int m_year;
	int m_month;
	int m_day;
};

#endif