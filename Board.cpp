//
// Created by talal on 6/6/20.
//

#include "Board.h"
Board::Board():Shapes(),Validation(),Hint(),Data(),Movement(){
    select = 1;
    store = new int*[8];
    for(int i = 0; i<8 ; i++) {
        store[i] = new int[8];
    }
}
void Board::CreateBoard(){
    if(createonce == false) {
        bool check;
        do {
            int x = 50, y = 150;
            for (int i = 0; i < 8; i++) {
                x = 50;
                for (int j = 0; j < 8; j++) {
                    store[i][j] = Draw(x, y);
                    x += 100;
                }
                y += 75;
            }
            check = Creation(store);
            if (check == true) {
                glClearColor(1.0, 1.0, 1.0, 1.0);
                glClear(GL_COLOR_BUFFER_BIT);
            }
        } while (check != false);
    }
}
void Board::UpdateBoard(int validation){
    int x, y = 150;
    bool check;
    for (int i = 0; i < 8; i++) {
        x = 50;
        for (int j = 0; j < 8; j++) {
            if (validation == 1) {
                if ((store[i][j - 1]==store[i][j])&&(store[i][j + 1]==store[i][j]))
                    store[i][j] = 1 + rand() % 8;
            }
            Draw(x,y,store[i][j]);
            Draw_Hint(x,y,i,j);
            x += 100;
        }
        y += 75;
    }
    check = ifnomatch();
    if(check == true){
        createonce = false;
        CreateBoard();
        createonce = true;
    }
}
void Board::Display_Hint_on_Board(){
    if(hintvalidation != 0){
        Draw4Line(hint_x,hint_y);
    }
}
void Board::ResetBoard(int tolevel,int live, int mode_no){
    lives = live;
    if(mode_no == 1){
        level = tolevel;
        moves = 30;
        hintcount = 3;
        if (tolevel >= 1) {
            score = 0;
        }
        for(int i = 0; i<tolevel ; i++){
            moves -= 3;
        }
    }else if(mode_no == 2){
        level = tolevel;
        time = 0;
        if(level >= 1){
            score = 0;
        }
        hintcount = 3;
    }
    if (createonce == false) {
        bool check;
        do {
            int x = 50, y = 150;
            for (int i = 0; i < 8; i++) {
                x = 50;
                for (int j = 0; j < 8; j++) {
                    store[i][j] = Draw(x, y);
                    x += 100;
                }
                y += 75;
            }
            check = Creation(store);
            if (check == true) {
                glClearColor(1.0, 1.0, 1.0, 1.0);
                glClear(GL_COLOR_BUFFER_BIT);
            }
        } while (check != false);
    }
}
void Board::Move_(int x, int y){
    Move(x,y,store);
    if(to_update == true){
        UpdateBoard();
        to_update = false;
    }
}
void Board::ProgressBar(int i) {
    int till;
    if(i==0){
        till = score * (7.85);
    }else{
        float t = (785)*(1.0) / target();
        till = score * (t);
        //cout<<till<<endl;
    }
    if (score > 0) {
        DrawLine(15, 795, till, 795, 10, colors[LIGHT_GREEN]);
        DrawLine(15, 805, till, 805, 10, colors[LIGHT_GREEN]);
        DrawLine(15, 785, till, 785, 10, colors[LIGHT_GREEN]);
    }
}
void Board::TimeBar(){
    float till;
    if(level == 1){
        till = time*(3.93);
    }else if(level == 2){
        till = time*(4.36);
    }else if(level == 3){
        till = time*(4.91);
    }else if(level == 3){
        till = time*(5.61);
    }else{
        till = time*(6.542);
    }
    if (time > 0) {
        DrawLine(15, 745, till, 745, 10, colors[LIGHT_GREEN]);
        DrawLine(15, 755, till, 755, 10, colors[LIGHT_GREEN]);
        DrawLine(15, 735, till, 735, 10, colors[LIGHT_GREEN]);
    }
}
bool Board::ifnomatch() {
    for(int i = 0; i<8; i++){
            for(int j = 0; j<8; j++){
                if(j<6){
                    if(store[i][j] == store[i][j+2]){
                        if(((i<=6) && (store[i][j] == store[i+1][j+1])) || ((i>=1) && (store[i][j] == store[i-1][j+1]))){
                            return false;
                        }
                    }
                    if(store[i][j] == store[i][j+1]){
                        if(((i<=6) && (store[i][j] == store[i+1][j+2])) || ((i!=0) && (store[i][j] == store[i-1][j+2]))){
                            return false;
                        }
                        if(j<5){
                            if(store[i][j] == store[i][j+3]){
                                return false;
                            }
                        }
                    }
                }
                if(j>1){
                    if(store[i][j] == store[i][j-2]){
                        if(((i<7) && (store[i][j] == store[i+1][j-1])) || ((i!=0) && (store[i-1][j-1] == store[i][j]))){
                            return false;
                        }
                    }
                    if(store[i][j] == store[i][j-1]){
                        if(((i<7) && (store[i][j] == store[i+1][j-2])) || ((i!=0) && (store[i][j] == store[i-1][j-2]))){
                            return false;
                        }
                        if(j>2){
                            if(store[i][j] == store[i][j-3]){
                                return false;
                            }
                        }
                    }
                }
                if(i<6){
                    if(store[i][j] == store[i+2][j]){
                        if(((j<7) && (store[i][j] == store[i+1][j+1])) || ((j!=0) && (store[i][j] == store[i+1][j-1]))){
                            return false;
                        }
                    }
                    if(store[i][j] == store[i+1][j]){
                        if(((j<7) && (store[i][j] == store[i+2][j+1])) || ((j!=0) && (store[i][j] == store[i+2][j-1]))){
                            return false;
                        }
                        if(i<5){
                            if(store[i][j] == store[i+3][j]){
                                return false;
                            }
                        }
                    }
                }
                if(i>1){
                    if(store[i][j] == store[i-2][j]){
                        if(((j<=6) && (store[i][j] == store[i-1][j+1])) || ((j!=0) && (store[i][j] == store[i-1][j-1]))){
                            return false;
                        }
                    }
                    if(store[i][j] == store[i-1][j]){
                        if(((j<=6) && (store[i][j] == store[i-2][j+1])) || ((i!=0) && (store[i][j] == store[i-2][j-1]))){
                            return false;
                        }
                        if(i>2){
                            if(store[i][j] == store[i-3][j]){
                                return false;
                            }
                        }
                    }
                }
            }
        }
    return true;
}