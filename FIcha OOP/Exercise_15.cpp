// Program that works with the main aspects of OOP

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

class Date
{

friend bool operator== (Date date1, Date date2);
friend ostream& operator<< (ostream &out, Date date1);

public:

    Date();
    Date(unsigned int year, unsigned int month,unsigned int day);
    Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
    void setYear(unsigned int year);
    void setMonth(unsigned int month);
    void setDay(unsigned int day);
    void setDate(unsigned int year, unsigned int month, unsigned int day);
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    string getDate() const; // returns the date in format "yyyy/mm/dd"
    void show() const; // shows the date on the screen in format "yyyy/mm/dd"

private:

    unsigned int year;
    unsigned int month;
    unsigned int day;

};



Date::Date(){
    this->year = 2002;
    this->month = 11;
    this->day = 22;

}

Date::Date(unsigned int year, unsigned int month,unsigned int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

bool operator== (Date date1, Date date2)
{
    if (date1.getYear() == date2.getYear() &&
        date1.getMonth() == date2.getMonth() &&
        date1.getDay() == date2.getDay())
    {
        return true;
    }
    return false;

}

ostream& operator<< (ostream &out, Date date1)
{
    out << "Year: " << date1.getYear() << "\n";
    out << "Month: " << date1.getMonth() << "\n";
    out << "Day: " << date1.getDay() << endl;
    return out;
}

void Date::setDate(unsigned int year, unsigned int month,unsigned int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

void Date::setYear(unsigned int year){
    this->year = year;
}

unsigned int Date::getYear() const {
    return this->year;
}

unsigned int Date::getDay() const {
    return this->day;
}

unsigned int Date::getMonth() const {
    return this->month;
}


int main()
{
    Date birthday(2002,9,29);
    cout << birthday << endl;
    return 0;
}