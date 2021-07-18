//
// Created by talal on 6/6/20.
//

#include "Data.h"

Data::Data(){
    score = time = 0;
    moves = 30;
    lives = 3;
    level = mode = 1;
    name = "";
}
int Data::limit(){
    if(level == 1){
        return 200;
    }else if(level == 2){
        return 180;
    }else if(level == 3){
        return 160;
    }else if(level == 4){
        return 140;
    }
    return 120;
}
int Data::target(){
    if(level == 1){
        return 300;
    }else if(level == 2){
        return 260;
    }else if(level == 3){
        return 220;
    }else if(level == 4){
        return 180;
    }
    return 140;
}