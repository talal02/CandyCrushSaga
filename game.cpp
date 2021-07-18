//
// Created by talal on 6/6/20.
//
#ifndef CANDY_CRUSH_CPP_
#define CANDY_CRUSH_CPP_
#include "Interface.h"
using namespace std;
Interface* gameplay = new Interface;
void SetCanvasSize(int width, int height) {
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();
}
void GameDisplay(){
    if(gameplay->file == true){
        gameplay->Display_Entry();
    }else if(gameplay->show_savef == true){
        gameplay->Display_Files();
    }else if(gameplay->load==true){
        gameplay->Load_Game();
        gameplay->load = false;
        gameplay->Menu = true;
    }else if(gameplay->Menu==true){
        gameplay->Display_Menu();
    }else if(gameplay->Help==true){
        gameplay->Display_Help();
    }else if(gameplay->Highscores==true){
        gameplay->Display_Highscores();
    }else if(gameplay->Mode==true){
        gameplay->Change_Mode();
    }else if(gameplay->board==true){
        gameplay->Display_Board();
    }else if(gameplay->gameover!=0){
        gameplay->Game_Over(gameplay->gameover);
        gameplay->gameover = 0;
    }else if(gameplay->gamecompleted == true){
        gameplay->Game_Completed();
        gameplay->gamecompleted = false;
    }else if(gameplay->levels==true){
        gameplay->Display_Levels();
    }
    glutPostRedisplay();
    glutSwapBuffers();

}
void PrintableKeys(unsigned char key, int x, int y) {
    if(gameplay->file == true){
        if(key == '\n' || int(key) == 13){
            gameplay->file = false;
            gameplay->filename = gameplay->name;
            gameplay->save_new_file();
            gameplay->Menu = true;
        }
        if(key == '1'){
            gameplay->show_savef = true;
            gameplay->file = false;
        }
        if(int(key) != 8 && key != '1') {
            gameplay->name += key;
        }

    }else if(gameplay->show_savef == true){
        if(key == '1' || key == '2' || key == '3' || key == '4' || key == '5'){
            int loading = int(key) - 48;
            gameplay->show_savef = false;
            gameplay->load = true;
            int* values = gameplay->load_game(loading);
            gameplay->score = values[0];
            gameplay->level = values[1];
            gameplay->moves = values[2];
            gameplay->hintcount = values[3];
            gameplay->mode = values[4];
            gameplay->time = values[5];
            gameplay->lives = values[6];
            delete [] values;
        }else if(key == 'b' || key == 27){
            gameplay->show_savef = false;
            gameplay->file = true;
            cout<<"True"<<endl;
        }
    }else if(gameplay->Menu == true){
        if(key == '1'){
            gameplay->Menu = false;
            gameplay->board = true;
        } else if(key == '2'){
            gameplay->Menu = false;
            gameplay->Highscores = true;
        } else if(key == '3'){
            gameplay->Menu = false;
            gameplay->Mode = true;
        } else if(key == '4'){
            gameplay->Menu = false;
            gameplay->Help = true;
        }else if(key == '5'){
            gameplay->save_game(gameplay->score,gameplay->level,gameplay->moves,gameplay->hintcount,gameplay->mode,gameplay->time,gameplay->lives);
            gameplay->save = true;
        }else if (key == 27) {
            gameplay->save_game(gameplay->score,gameplay->level,gameplay->moves,gameplay->hintcount,gameplay->mode,gameplay->time,gameplay->lives);
            exit(1);
        }else if(key == '6'){
            gameplay->Menu = false;
            gameplay->levels = true;
        }
    }else if(gameplay->Highscores == true){
        if(key == 'b' || key == 27){
            gameplay->Highscores = false;
            gameplay->Menu = true;
        }
    }else if(gameplay->Mode == true) {
        if(key == '1'){
            gameplay->mode = 1;
            gameplay->ResetBoard(1,1);
        }else if(key == '2'){
            gameplay->mode = 2;
            gameplay->ResetBoard(1,2);
        }
        if (key == 'b' || key == 27) {
            gameplay->Mode = false;
            gameplay->Menu = true;
        }
    }else if(gameplay->Help == true) {
        if (key == 'b' || key == 27) {
            gameplay->Help = false;
            gameplay->Menu = true;
        }
    }else if(gameplay->board == true){
        if(key == 'h'){
            if(gameplay->hintcount > 0){
                gameplay->givehint = true;
                gameplay->hintcount--;
            }
        }else if (key == 'b' || key == 27){
            gameplay->board = false;
            gameplay->Menu = true;
        }else if(key == 'p'){
            if(gameplay->pause == false){
                gameplay->pause = true;
            }else if(gameplay->pause == true){
                gameplay->pause = false;
            }
        }
    }else if(gameplay->levels == true){
        if (key == 'p' || key == 'b' || key == 27){
            gameplay->levels = false;
            gameplay->Menu = true;
        }
    }
    glutPostRedisplay();
}
void Timer(int m) {

    if(gameplay->mode == 2 &&  gameplay->board == true && gameplay->pause == false){
        gameplay->time += 1;
    }

    glutTimerFunc(1000.0, Timer, 0);
}
void MouseMoved(int x, int y) {
    if(x>=35&&x<=65){
        (y>=665&&y<=695) ? gameplay->Draw4L(50, 150) : (y>=590&&y<=625) ? gameplay->Draw4L(50, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(50, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(50, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(50, 450) : (y>=295&&y<=325) ? gameplay->Draw4L(50, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(50, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(50, 670) :
        gameplay->Draw4L(0, 0);
    }else if(x>=135&&x<=165){
        (y>=665&&y<=695) ? gameplay->Draw4L(150, 149) : (y>=590&&y<=625) ? gameplay->Draw4L(150, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(150, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(150, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(150, 450) : (y>=295&&y<=325) ? gameplay->Draw4L(150, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(150, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(150, 670)  :
        gameplay->Draw4L(0, 0);
    }else if(x>=235&&x<=275){
        (y>=665&&y<=695) ? gameplay->Draw4L(250, 150) : (y>=590&&y<=625) ? gameplay->Draw4L(250, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(250, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(250, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(250, 450) : (y>=295&&y<=325) ? gameplay->Draw4L(250, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(250, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(250, 670) :
        gameplay->Draw4L(0, 0);
    }else if(x>=335&&x<=375){
        (y>=665&&y<=695) ? gameplay->Draw4L(350, 150) : (y>=590&&y<=625) ? gameplay->Draw4L(350, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(350, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(350, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(350, 450) : (y>=295&&y<=325) ? gameplay->Draw4L(350, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(350, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(350, 670) :
        gameplay->Draw4L(0, 0);
    }else if(x>=435&&x<=470){
        (y>=665&&y<=695) ? gameplay->Draw4L(450, 150) : (y>=590&&y<=625) ? gameplay->Draw4L(450, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(450, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(450, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(450, 449) : (y>=295&&y<=325) ? gameplay->Draw4L(450, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(450, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(450, 670) :
        gameplay->Draw4L(0, 0);
    }else if(x>=535&&x<=570){
        (y>=665&&y<=695) ? gameplay->Draw4L(550, 150) : (y>=590&&y<=625) ? gameplay->Draw4L(550, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(550, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(550, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(550, 450) : (y>=295&&y<=325) ? gameplay->Draw4L(550, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(550, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(550, 670) :
        gameplay->Draw4L(0, 0);
    }else if(x>=635&&x<=670){
        (y>=665&&y<=695) ? gameplay->Draw4L(650, 150) : (y>=590&&y<=625) ? gameplay->Draw4L(650, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(650, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(650, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(650, 450) : (y>=295&&y<=325) ? gameplay->Draw4L(650, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(650, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(650, 670) :
        gameplay->Draw4L(0, 0);
    }else if(x>=735&&x<=770){
        (y>=665&&y<=695) ? gameplay->Draw4L(750, 150) : (y>=590&&y<=625) ? gameplay->Draw4L(750, 225) :
        (y>=515&&y<=545) ? gameplay->Draw4L(750, 300) : (y>=445&&y<=475) ? gameplay->Draw4L(750, 375) :
        (y>=365&&y<=395) ? gameplay->Draw4L(750, 450) : (y>=295&&y<=325) ? gameplay->Draw4L(750, 525) :
        (y>=220&&y<=250) ? gameplay->Draw4L(750, 600) : (y>=140&&y<=170) ? gameplay->Draw4L(750, 670) :
        gameplay->Draw4L(0, 0);
    }
    glutPostRedisplay();
}
void MouseClicked(int button, int state, int x, int y) {

    if (button == GLUT_LEFT_BUTTON){
        if(gameplay->pause == false){
        if(state == 0 && gameplay->board == true){
            if(gameplay->Movx == 0 && gameplay->Movy == 0){
                gameplay->Movx = x;
                gameplay->Movy = y;
                gameplay->set_values(gameplay->Movx, gameplay->Movy);
                gameplay->hintvalidation = 0;
                gameplay->select = 2;
                system("canberra-gtk-play -f JUMP.wav");
            } else {
                gameplay->set_values(x,y);
                gameplay->Move(x,y,gameplay->store);
                if(gameplay->Creation(gameplay->store) == false){
                    gameplay->Move(x,y,gameplay->store);
                    gameplay->select = 1;
                }else {
                    gameplay->select = 1;
                }
                gameplay->Movx = 0;
                gameplay->Movy = 0;
                if((gameplay->is_matching(gameplay->store,gameplay->score))==true){
                    int matched = 0;
                    if(gameplay->mode==1) {
                        gameplay->moves -= 1;
                    }
                    system("canberra-gtk-play -f JUMP.wav");
                    do{
                        matched++;
                        if(matched==2){
                            gameplay->UpdateBoard();
                        }else{
                            gameplay->UpdateBoard(1);
                        }
                    }while((gameplay->is_matching(gameplay->store,gameplay->score))==true);
                }
            }
        }
        }

    } else if (button == GLUT_RIGHT_BUTTON){

    }
    glutPostRedisplay();
}
int main(int argc, char*argv[]) {
    int width = 800, height = 850; // i have set my window size to be 800 x 600
    InitRandomizer(); // seed the random number generator...
    glutInit(&argc, argv); // initialize the graphics library...
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
    glutInitWindowPosition(560, 120); // set the initial position of our window
    glutInitWindowSize(width, height); // set the size of our window
    glutCreateWindow("OOP Project"); // set the title of our game window
    SetCanvasSize(width, height); // set the number of pixels...
    glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
    glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
    glutTimerFunc(1000.0, Timer, 0);
    glutMouseFunc(MouseClicked);
    glutPassiveMotionFunc(MouseMoved); // Mouse
    glutMainLoop();
    return 1;
}
#endif
