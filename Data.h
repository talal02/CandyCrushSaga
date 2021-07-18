//
// Created by talal on 6/6/20.
//

#ifndef FINAL_PROJECT_DATA_H
#define FINAL_PROJECT_DATA_H
#include <iostream>
using namespace std;

class Data {
public:
    int level;
    int lives;
    int score;
    int moves;
    string name;
    int mode;
    int time;
    Data();
    int limit();
    int target();
};


#endif //FINAL_PROJECT_DATA_H
