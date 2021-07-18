//
// Created by talal on 6/6/20.
//

#ifndef FINAL_PROJECT_INTERFACE_H
#define FINAL_PROJECT_INTERFACE_H

#include "Board.h"
#include "FileHandling.h"
class Interface : public Board, public FileHandling{
public:
    bool Menu, Help, board, Highscores, load, Mode, save, gamecompleted, levels;
    int gameover;
    Interface();
    void Display_Entry();
    void Display_Files();
    void Boundary();
    void Load_Game();
    void Display_Name();
    void Display_Menu();
    void Display_Help();
    void Save_game();
    void Display_Highscores();
    void Change_Mode();
    void Display_Levels();
    void Display_Board();
    void Game_Over(int mod);
    void Game_Completed();
};


#endif //FINAL_PROJECT_INTERFACE_H
