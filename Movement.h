//
// Created by talal on 6/6/20.
//

#ifndef FINAL_PROJECT_MOVEMENT_H
#define FINAL_PROJECT_MOVEMENT_H

#include <iostream>
using namespace std;

class Movement {
public:
    int Movx, Movy;
    bool to_update;
    Movement();
    void Move(int x1, int y1, int** store);
};


#endif //FINAL_PROJECT_MOVEMENT_H
