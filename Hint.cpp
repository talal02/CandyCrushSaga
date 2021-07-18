//
// Created by talal on 6/6/20.
//

#include "Hint.h"
#include <iostream>
using namespace std;
Hint::Hint(){
    givehint = false;
    hintcount = 3;
    hintvalidation = 0;
    hint_x = hint_y = -1;
}
void Hint::Draw_Hint(int x, int y, int i, int j){
    if(hint_x == i && hint_y == j && hintvalidation == 0){
        hint_x = x;
        hint_y = y;
        hintvalidation = 1;
    }
}
void Hint::Assign_to_hint(int i ,int j){
    hint_x = i;
    hint_y = j;
    givehint = true;
}
void Hint::Hint_(int** store){
    givehint = false;
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            if(j<6){
                if(store[i][j] == store[i][j+2]){
                    if(((i<=6) && (store[i][j] == store[i+1][j+1])) || ((i>=1) && (store[i][j] == store[i-1][j+1]))){
                        Assign_to_hint(i,j);
                        break;
                    }
                }
                if(store[i][j] == store[i][j+1]){
                    if(((i<=6) && (store[i][j] == store[i+1][j+2])) || ((i!=0) && (store[i][j] == store[i-1][j+2]))){
                        Assign_to_hint(i,j+1);
                        break;
                    }
                    if(j<5){
                        if(store[i][j] == store[i][j+3]){
                            Assign_to_hint(i,j+1);
                            break;
                        }
                    }
                }
            }
            if(j>1){
                if(store[i][j] == store[i][j-2]){
                    if(((i<7) && (store[i][j] == store[i+1][j-1])) || ((i!=0) && (store[i-1][j-1] == store[i][j]))){
                        Assign_to_hint(i,j);
                        break;
                    }
                }
                if(store[i][j] == store[i][j-1]){
                    if(((i<7) && (store[i][j] == store[i+1][j-2])) || ((i!=0) && (store[i][j] == store[i-1][j-2]))){
                        Assign_to_hint(i,j-1);
                        break;
                    }
                    if(j>2){
                        if(store[i][j] == store[i][j-3]){
                            Assign_to_hint(i,j-1);
                            break;
                        }
                    }
                }
            }
            if(i<6){
                if(store[i][j] == store[i+2][j]){
                    if(((j<7) && (store[i][j] == store[i+1][j+1])) || ((j!=0) && (store[i][j] == store[i+1][j-1]))){
                        Assign_to_hint(i,j);
                        break;
                    }
                }
                if(store[i][j] == store[i+1][j]){
                    if(((j<7) && (store[i][j] == store[i+2][j+1])) || ((j!=0) && (store[i][j] == store[i+2][j-1]))){
                        Assign_to_hint(i+1,j);
                        break;
                    }
                    if(i<5){
                        if(store[i][j] == store[i+3][j]){
                            Assign_to_hint(i+1,j);
                            break;
                        }
                    }
                }
            }
            if(i>1){
                if(store[i][j] == store[i-2][j]){
                    if(((j<=6) && (store[i][j] == store[i-1][j+1])) || ((j!=0) && (store[i][j] == store[i-1][j-1]))){
                        Assign_to_hint(i,j);
                        break;
                    }
                }
                if(store[i][j] == store[i-1][j]){
                    if(((j<=6) && (store[i][j] == store[i-2][j+1])) || ((i!=0) && (store[i][j] == store[i-2][j-1]))){
                        Assign_to_hint(i-1,j);
                        break;
                    }
                    if(i>2){
                        if(store[i][j] == store[i-3][j]){
                            Assign_to_hint(i-1,j);
                            break;
                        }
                    }
                }
            }
        }
        if(givehint==true){
            break;
        }
    }
}