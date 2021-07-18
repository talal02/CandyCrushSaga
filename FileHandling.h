//
// Created by talal on 6/6/20.
//

#ifndef FINAL_PROJECT_FILEHANDLING_H
#define FINAL_PROJECT_FILEHANDLING_H
#include <iostream>
#include <fstream>
#include "util.h"
using namespace std;

class FileHandling {
public:
    string filename;
    bool show_savef;
    bool file;
    FileHandling();
    void capacity();
    void save_new_file();
    void Data_Highscores();
    void saved_files();
    void save_game(int score, int level, int moves, int hints, int mode, int time, int live);
    int* load_game(int toload);
};


#endif //FINAL_PROJECT_FILEHANDLING_H
