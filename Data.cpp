//
// Created by Vittoria Petri on 28/07/24.
//
#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(int d, int m, int y) : day(d), month(m), year(y) {}

void Data::inputData() {
    cout << "Insert the date of the new activity:" << endl;
    cout << "Day:";
    cin >> day;
    do {
        cout << "Invalid day. Enter a day between: 1-31" << endl;
        cin >> day;
    } while (day > 31 || day < 1);
    cout << "Month:";
    cin >> month;
    do {
        cout << "Invalid month. Enter a month between: 1-12" << endl;
        cin >> month;
    } while (month > 12 || month < 1);
    cout << "Year:";
    cin >> year;
    do {
        cout << "Invalid year." << endl;
        cin >> year;
    } while (year > 9999 || year < 1900);

    setData(day, month, year);
}

void Data::setData(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Data::displayData() const {
    cout << day << "/" << month << "/" << year << endl;
}