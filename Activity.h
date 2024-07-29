//
// Created by Vittoria Petri on 23/07/24.
//
#include <string>
#ifndef ACTIVITYTRACKER_ACTIVITY_H
#define ACTIVITYTRACKER_ACTIVITY_H

class Activity {
private:
    std::string nameActivity;
    std::string description;
    int durationActivity;
    std::string startActivity;
    std::string endActivity;
public:
    Activity(std::string activity, std::string desc, int time, std::string start, std::string end) :
    nameActivity(activity), description(desc), durationActivity(time), startActivity(start), endActivity(end) {}
};

#endif //ACTIVITYTRACKER_ACTIVITY_H
