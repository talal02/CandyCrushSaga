//
// Created by talal on 6/6/20.
//

#ifndef FINAL_PROJECT_BOARD_H
#define FINAL_PROJECT_BOARD_H
#include "util.h"
#include "Data.h"
#include "Validation.h"
#include "Movement.h"
#include "Hint.h"
#include "Shapes.h"
#include "FileHandling.h"


class Board : public Shapes, public Validation, public Hint, public Data, public Movement{
public:
    int** store;
    int select;
    Board();
    void CreateBoard();
    void UpdateBoard(int validation = -1);
    void Display_Hint_on_Board();
    void ResetBoard(int tolevel = 1,int = 3, int mode_no = 1);
    void Move_(int x, int y);
    void ProgressBar(int i = 0);
    void TimeBar();
    bool ifnomatch();
};



#endif //FINAL_PROJECT_BOARD_H
