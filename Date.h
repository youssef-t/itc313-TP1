#ifndef _DATE_H
#define _DATE_H

class Date {
public:
	Date(int day=1, int month=1, int year=2019); //constructor with a default date value 1 1 2019
	
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	
	void modifDate(int day,int month,int year);
private:
	int m_day;
	int m_month;
	int m_year;
	
};

#endif