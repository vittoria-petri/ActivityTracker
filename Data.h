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
    Data() = default;
    Data(int d, int m, int y);

    void inputData();
    void setData(int d, int m, int y);
    void displayData() const;
};

#endif //ACTIVITYTRACKER_DATA_H
