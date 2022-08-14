#include <iostream>

using namespace std;

struct Date {
    short day;
    short month;
    short year;

    Date(short day, short month, short year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void input() {
        cout << "Day:";
        cin >> this->day;
        cout << "Month:";
        cin >> this->month;
        cout << "Year:";
        cin >> this->year;
    }

    void output() {
        cout << "Day:" << this->day << " Month:" << this->month << " Year:" << this->year;
    }
};

int main()
{
    Date one(17,03,1999);
    one.input();
    one.output();

}

