//
// Created by talal on 6/6/20.
//

#include "Movement.h"

Movement::Movement(){
    Movx = Movy = 0;
    to_update = false;
}
void Movement::Move(int x1, int y1, int** store) {
    //ROW @ 1
    if(Movx+100 == x1 && y1==675){
        if (Movx==50) {
            swap(store[0][0], store[0][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[0][1], store[0][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[0][2], store[0][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[0][3], store[0][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[0][4], store[0][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[0][5], store[0][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[0][6], store[0][7]);
            to_update = true;
        }
    }
    else if(Movx-100 == x1 && y1==675){
        if (Movx==150) {
            swap(store[0][0], store[0][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[0][1], store[0][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[0][2], store[0][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[0][3], store[0][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[0][4], store[0][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[0][5], store[0][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[0][6], store[0][7]);
            to_update = true;
        }
    }
    else if(Movy-75 == y1 && y1==600){
        if (Movx==50) {
            swap(store[0][0], store[1][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[0][1], store[1][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[0][2], store[1][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[0][3], store[1][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[0][4], store[1][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[0][5], store[1][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[0][6], store[1][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[0][7], store[1][7]);
            to_update = true;
        }
    }
        //ROW @ 2
    else if(Movx+100 == x1 && y1==600){
        if (Movx==50) {
            swap(store[1][0], store[1][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[1][1], store[1][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[1][2], store[1][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[1][3], store[1][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[1][4], store[1][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[1][5], store[1][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[1][6], store[1][7]);
            to_update = true;
        }
    }
    else if(Movx-100 == x1 && y1==600){
        if (Movx==150) {
            swap(store[1][0], store[1][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[1][1], store[1][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[1][2], store[1][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[1][3], store[1][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[1][4], store[1][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[1][5], store[1][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[1][6], store[1][7]);
            to_update = true;
        }
    }
    else if(Movy-75 == y1 && y1==525){
        if (Movx==50) {
            swap(store[2][0], store[1][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[2][1], store[1][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[2][2], store[1][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[2][3], store[1][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[2][4], store[1][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[2][5], store[1][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[2][6], store[1][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[2][7], store[1][7]);
            to_update = true;
        }
    }
    else if(Movy+75 == y1 && y1==675){
        if (Movx==50) {
            swap(store[0][0], store[1][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[0][1], store[1][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[0][2], store[1][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[0][3], store[1][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[0][4], store[1][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[0][5], store[1][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[0][6], store[1][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[0][7], store[1][7]);
            to_update = true;
        }
    }
        //ROW @ 3
    else if(Movx+100 == x1 && y1==525){
        if (Movx==50) {
            swap(store[2][0], store[2][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[2][1], store[2][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[2][2], store[2][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[2][3], store[2][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[2][4], store[2][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[2][5], store[2][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[2][6], store[2][7]);
            to_update = true;
        }
    }
    else if(Movx-100 == x1 && y1==525){
        if (Movx==150) {
            swap(store[2][0], store[2][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[2][1], store[2][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[2][2], store[2][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[2][3], store[2][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[2][4], store[2][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[2][5], store[2][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[2][6], store[2][7]);
            to_update = true;
        }
    }
    else if(Movy-75 == y1 && y1==450){
        if (Movx==50) {
            swap(store[2][0], store[3][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[2][1], store[3][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[2][2], store[3][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[2][3], store[3][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[2][4], store[3][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[2][5], store[3][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[2][6], store[3][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[2][7], store[3][7]);
            to_update = true;
        }
    }
    else if(Movy+75 == y1 && y1==600){
        if (Movx==50) {
            swap(store[2][0], store[1][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[2][1], store[1][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[2][2], store[1][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[2][3], store[1][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[2][4], store[1][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[2][5], store[1][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[2][6], store[1][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[2][7], store[1][7]);
            to_update = true;
        }
    }
        //ROW @ 4
    else if (Movx+100 == x1 && y1==450) {
        if (Movx==50) {
            swap(store[3][0], store[3][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[3][1], store[3][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[3][2], store[3][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[3][3], store[3][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[3][4], store[3][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[3][5], store[3][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[3][6], store[3][7]);
            to_update = true;
        }
    }
    else if (Movx-100 == x1 && y1==450) {
        if (Movx==150) {
            swap(store[3][0], store[3][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[3][1], store[3][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[3][2], store[3][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[3][3], store[3][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[3][4], store[3][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[3][5], store[3][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[3][6], store[3][7]);
            to_update = true;
        }
    }
    else if (Movy-75 == y1 && y1==375) {
        if (Movx==50) {
            swap(store[4][0], store[3][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[4][1], store[3][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[4][2], store[3][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[4][3], store[3][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[4][4], store[3][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[4][5], store[3][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[4][6], store[3][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[4][7], store[3][7]);
            to_update = true;
        }
    }
    else if (Movy+75 == y1 && y1==525) {
        if (Movx==50) {
            swap(store[2][0], store[3][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[2][1], store[3][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[2][2], store[3][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[2][3], store[3][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[2][4], store[3][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[2][5], store[3][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[2][6], store[3][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[2][7], store[3][7]);
            to_update = true;
        }
    }
        //ROW @ 5
    else if (Movx+100 == x1 && y1==375) {
        if (Movx==50) {
            swap(store[4][0], store[4][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[4][1], store[4][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[4][2], store[4][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[4][3], store[4][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[4][4], store[4][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[4][5], store[4][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[4][6], store[4][7]);
            to_update = true;
        }
    }
    else if (Movx-100 == x1 && y1==375) {
        if (Movx==150) {
            swap(store[4][0], store[4][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[4][1], store[4][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[4][2], store[4][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[4][3], store[4][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[4][4], store[4][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[4][5], store[4][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[4][6], store[4][7]);
            to_update = true;
        }
    }
    else if (Movy-75 == y1 && y1==300) {
        if (Movx==50) {
            swap(store[4][0], store[5][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[4][1], store[5][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[4][2], store[5][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[4][3], store[5][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[4][4], store[5][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[4][5], store[5][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[4][6], store[5][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[4][7], store[5][7]);
            to_update = true;
        }
    }
    else if (Movy+75 == y1 && y1==450) {
        if (Movx==50) {
            swap(store[4][0], store[3][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[4][1], store[3][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[4][2], store[3][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[4][3], store[3][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[4][4], store[3][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[4][5], store[3][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[4][6], store[3][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[4][7], store[3][7]);
            to_update = true;
        }
    }
        //ROW @ 6
    else if (Movx+100 == x1 && y1==300) {
        if (Movx==50) {
            swap(store[5][0], store[5][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[5][1], store[5][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[5][2], store[5][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[5][3], store[5][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[5][4], store[5][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[5][5], store[5][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[5][6], store[5][7]);
            to_update = true;
        }
    }
    else if (Movx-100 == x1 && y1==300) {
        if (Movx==150) {
            swap(store[5][0], store[5][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[5][1], store[5][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[5][2], store[5][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[5][3], store[5][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[5][4], store[5][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[5][5], store[5][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[5][6], store[5][7]);
            to_update = true;
        }
    }
    else if (Movy-75 == y1 && y1==225) {
        if (Movx==50) {
            swap(store[6][0], store[5][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[6][1], store[5][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[6][2], store[5][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[6][3], store[5][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[6][4], store[5][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[6][5], store[5][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[6][6], store[5][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[6][7], store[5][7]);
            to_update = true;
        }
    }
    else if (Movy+75 == y1 && y1==375) {
        if (Movx==50) {
            swap(store[4][0], store[5][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[4][1], store[5][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[4][2], store[5][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[4][3], store[5][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[4][4], store[5][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[4][5], store[5][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[4][6], store[5][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[4][7], store[5][7]);
            to_update = true;
        }
    }
        //ROW @ 7
    else if (Movx+100 == x1 && y1==225) {
        if (Movx==50) {
            swap(store[6][0], store[6][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[6][1], store[6][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[6][2], store[6][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[6][3], store[6][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[6][4], store[6][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[6][5], store[6][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[6][6], store[6][7]);
            to_update = true;
        }
    }
    else if (Movx-100 == x1 && y1==225) {
        if (Movx==150) {
            swap(store[6][0], store[6][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[6][1], store[6][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[6][2], store[6][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[6][3], store[6][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[6][4], store[6][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[6][5], store[6][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[6][6], store[6][7]);
            to_update = true;
        }
    }
    else if (Movy-75 == y1 && y1==150) {
        if (Movx==50) {
            swap(store[6][0], store[7][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[6][1], store[7][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[6][2], store[7][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[6][3], store[7][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[6][4], store[7][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[6][5], store[7][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[6][6], store[7][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[6][7], store[7][7]);
            to_update = true;
        }
    }
    else if (Movy+75 == y1 && y1==300) {
        if (Movx==50) {
            swap(store[6][0], store[5][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[6][1], store[5][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[6][2], store[5][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[6][3], store[5][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[6][4], store[5][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[6][5], store[5][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[6][6], store[5][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[6][7], store[5][7]);
            to_update = true;
        }
    }
        //ROW @ 8
    else if (Movx+100 == x1 && y1==150) {
        if (Movx==50) {
            swap(store[7][0], store[7][1]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[7][1], store[7][2]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[7][2], store[7][3]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[7][3], store[7][4]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[7][4], store[7][5]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[7][5], store[7][6]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[7][6], store[7][7]);
            to_update = true;
        }
    }
    else if (Movx-100 == x1 && y1==150) {
        if (Movx==150) {
            swap(store[7][0], store[7][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[7][1], store[7][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[7][2], store[7][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[7][3], store[7][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[7][4], store[7][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[7][5], store[7][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[7][6], store[7][7]);
            to_update = true;
        }
    }
    else if (Movy+75 == y1 && y1==225) {
        if (Movx==50) {
            swap(store[6][0], store[7][0]);
            to_update = true;
        } else if (Movx==150) {
            swap(store[6][1], store[7][1]);
            to_update = true;
        } else if (Movx==250) {
            swap(store[6][2], store[7][2]);
            to_update = true;
        } else if (Movx==350) {
            swap(store[6][3], store[7][3]);
            to_update = true;
        } else if (Movx==450) {
            swap(store[6][4], store[7][4]);
            to_update = true;
        } else if (Movx==550) {
            swap(store[6][5], store[7][5]);
            to_update = true;
        } else if (Movx==650) {
            swap(store[6][6], store[7][6]);
            to_update = true;
        } else if (Movx==750) {
            swap(store[6][7], store[7][7]);
            to_update = true;
        }
    }
}