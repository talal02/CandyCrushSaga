//
// Created by talal on 6/6/20.
//

#include "FileHandling.h"

FileHandling::FileHandling(){
    filename = "";
    show_savef = false;
    file = true;
};
void FileHandling::capacity(){
    ifstream obj;
    int i = 0;
    string arr[6];
    obj.open("Save.txt",ios::in);
    while(!obj.eof()){
        if(i<1)
            getline(obj, arr[0]);
        if(i>=1) {
            getline(obj, arr[i-1]);
        }
        i++;
    }
    obj.close();
    ofstream objo;
    objo.open("Save.txt",ios::trunc);
    i = 0;
    while(i<5){
        objo << arr[i] << endl;
        i++;
    }
    objo.close();
}
void FileHandling::save_new_file(){
    int count = 0;
    ifstream obji;
    string f;
    obji.open("Save.txt",ios::in);
    while(!obji.eof()){
        getline(obji,f);
        count++;
    }
    obji.close();
    ofstream obj;
    obj.open("Save.txt",ios::app);
    obj << filename << endl;
    obj.close();
    if(count>5){
        capacity();
    }
    save_game(0,1,0,3,1,0,3);
}
void FileHandling::Data_Highscores(){
    ifstream obj;
    obj.open("Save.txt",ios::in);
    string n = "";
    int y = 500, i = 1;
    DrawString(1,340,670,"High Scores",colors[RED]);
    DrawString(2,250,600,"Name <-> Level Completed <-> Score",colors[HOT_PINK]);
    int l = 5;
    int score = 500;
    while(!obj.eof()){
        getline(obj,n);
        if(i<5)
            if(n!="")
                DrawString(2,280,y,to_string(i)+". "+n+" <-> "+to_string(l)+" <-> "+to_string(score),colors[BLACK]);
        y-=50;
        if(i%2==0){
            l--;
            score-= 180;
        }
        i++;
        if(i%2==0){
            score -= 20;
        }
    }
    obj.close();
}
void FileHandling::saved_files(){
    ifstream obj;
    obj.open("Save.txt",ios::in);
    string n = "";
    int y = 500, i = 1;
    DrawString(1,340,670,"Saved Files",colors[RED]);
    DrawString(2,190,550,"Press Corresponding key (1,2,3,4,5) to load Game.",colors[ROYAL_BLUE]);
    while(!obj.eof()){
        getline(obj,n);
        if(i<6)
            if(n!="")
                DrawString(2,340,y,to_string(i)+". "+n,colors[BLACK]);
        y-=50;
        i++;
    }
    DrawString(1,190,100,"Press \"B / Esc\" to go back to Main Menu.",colors[RED]);
    obj.close();
}
void FileHandling::save_game(int score, int level, int moves, int hints, int mode, int time, int live)
{
    ofstream obj;
    obj.open(filename+".txt", ios::out);
    obj.close();
    obj.open(filename+".txt", ios::trunc);
    obj << score << endl;
    obj << level << endl;
    obj << moves << endl;
    obj << hints << endl;
    obj << mode << endl;
    obj << time << endl;
    obj << live;
    obj.close();
}
int* FileHandling::load_game(int toload){
    int i = 0;
    string toopen = "";
    ifstream obj;
    obj.open("Save.txt",ios::in);
    while(!obj.eof()){
        i++;
        getline(obj,toopen);
        if(i==toload){
            break;
        }
    }
    filename = toopen;
    obj.close();
    int* toreturn = new int[7];
    i = 0;
    obj.open(toopen+".txt",ios::in);
    while(!obj.eof()){
        getline(obj,toopen);
        toreturn[i] = stoi(toopen);
        i++;
    }
    obj.close();
    return toreturn;
}