//
// Created by talal on 6/6/20.
//

#ifndef FINAL_PROJECT_HINT_H
#define FINAL_PROJECT_HINT_H


class Hint {
public:
    bool givehint;
    int hintcount;
    int hintvalidation;
    int hint_x;
    int hint_y;
    Hint();
    void Draw_Hint(int x, int y, int i, int j);
    void Assign_to_hint(int i ,int j);
    void Hint_(int** store);
};


#endif //FINAL_PROJECT_HINT_H
