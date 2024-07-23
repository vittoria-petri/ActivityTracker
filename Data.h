//
// Created by Vittoria Petri on 23/07/24.
//

#ifndef ACTIVITYTRACKER_DATA_H
#define ACTIVITYTRACKER_DATA_H

class Data {
private:
    int day;
    int month;
    int year;

public:
    Data(int d, int m, int y) : day(d), month(m), year(y) {}
};
#endif //ACTIVITYTRACKER_DATA_H
