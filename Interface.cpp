//
// Created by talal on 6/6/20.
//

#include "Interface.h"
Interface::Interface():Board(),FileHandling(){
    Menu = Help = board = Highscores = load = Mode = save = gamecompleted = levels = false;
    gameover = 0;
}
void Interface::Display_Entry(){
    glClearColor(1.0, 1.0, 1.0, 1.0 );
    glClear(GL_COLOR_BUFFER_BIT);
    DrawLine(300,400,500,400,5,colors[BLACK]);
    DrawLine(300,450,500,450,5,colors[BLACK]);
    DrawLine(303,400,303,450,5,colors[BLACK]);
    DrawLine(498,400,498,450,5,colors[BLACK]);
    DrawString(1,340,460,"Enter Name",colors[BLACK]);
    DrawString(1,370,350,"OR",colors[BLACK]);
    DrawString(3,150,330,"Press (1) if you want to play from previously saved game",colors[BLACK]);
    DrawString(3, 320, 420, name, colors[BLACKO]);
}
void Interface::Display_Files(){
    Boundary();
    saved_files();
}
void Interface::Boundary(){
    glClearColor(1.0, 1.0, 1.0, 1.0 );
    glClear(GL_COLOR_BUFFER_BIT);
    DrawLine(100,700,700,700,10,colors[AQUA_MARINE]);
    DrawLine(100,650,700,650,10,colors[AQUA_MARINE]);
    DrawLine(100,200,700,200,10,colors[AQUA_MARINE]);
    DrawLine(105,700,105,200,10,colors[AQUA_MARINE]);
    DrawLine(695,700,695,200,10,colors[AQUA_MARINE]);
    DrawLine(0,0,800,0,10,colors[AQUA_MARINE]);
    DrawLine(800,0,800,850,10,colors[AQUA_MARINE]);
    DrawLine(0,0,0,850,10,colors[AQUA_MARINE]);
    DrawLine(0,850,800,850,10,colors[AQUA_MARINE]);
}
void Interface::Load_Game(){
    glClearColor(1.0, 1.0, 1.0, 1.0 );
    glClear(GL_COLOR_BUFFER_BIT);
    DrawLine(0,0,800,0,10,colors[AQUA_MARINE]);
    DrawLine(800,0,800,850,10,colors[AQUA_MARINE]);
    DrawLine(0,0,0,850,10,colors[AQUA_MARINE]);
    DrawLine(0,850,800,850,10,colors[AQUA_MARINE]);
    DrawString(1,320,420,"!... Loading ...!",colors[DARK_ORCHID]);
    system("canberra-gtk-play -f Alert_1.wav");
}
void Interface::Display_Name(){
    name = filename;
    DrawString(2,380,830,name,colors[RED]);
}
void Interface::Display_Menu(){
    Boundary();
    DrawString(1,278,670,"CANDY CRUSH SAGA",colors[INDIAN_RED]);
    DrawString(3,300, 550, "1. Start Game", colors[BLACKO]);
    DrawString(3,300, 500, "2. Print HighScores", colors[BLACKO]);
    DrawString(3,300, 450, "3. Select Modes", colors[BLACKO]);
    DrawString(3,300, 400, "4. Help/Instructions", colors[BLACKO]);
    DrawString(3,300, 350, "5. Save Game", colors[BLACKO]);
    DrawString(3,300, 300, "6. Display Completed Levels", colors[BLACKO]);
    DrawString(3,300, 250, "Press Esc to Exit", colors[BLACKO]);
    DrawString(4,130,75,"© CANDY_CRUSH_SAGA by TALAL AHMED OOP_PROJECT FAST-NUCES, ISLAMABAD",colors[BLACKO]);
    DrawString(4,350,55,"@ 2020",colors[BLACKO]);
    Display_Name();
    Save_game();
    int draw = 60;
    for(int i = 0;i<8;i++){
        Drawoctagon(draw,760,colors[ROYAL_BLUE]);
        (i==6) ? draw+=80 :draw += 100;
    }
    draw = 685;
    for(int i = 0;i<6;i++){
        DrawSqgem(60,draw,colors[AQUA]);
        draw -= 100;
    }
    draw = 685;
    for(int i = 0;i<6;i++){
        DrawPolygon(740,draw,colors[SILVER]);
        draw -= 100;
    }
    draw = 60;
    for(int i = 0;i<8;i++){
        DrawDiamond(draw,110,colors[GOLD]);
        (i==6) ? draw+=80 :draw += 100;
    }
}
void Interface::Display_Help(){
    Boundary();
    DrawString(1,312,670,"INSTRUCTIONS",colors[BLACKO]);
    DrawString(3,120,620,"This Game Works on Mechanism of ==> Select & Swap <== ",colors[BLACKO]);
    DrawString(3,120,600,"Firstly, Select gem and then select gem you want to swap with.",colors[BLACKO]);
    DrawString(3,120,580,"Only Match that will be possible is Row Wise or Column Wise.",colors[BLACKO]);
    DrawString(3,120,560,"Press \'B\' or Esc key ==> Back to Main Page.",colors[BLACKO]);
    DrawString(3,120,540,"Press \'H\' key to get Hint. Only (3) Hints/Level Allowed.",colors[BLACKO]);
    DrawString(3,120,520,"Hint will be displayed on one of the three matches like below :",colors[BLACKO]);
    DrawPolygon(380,470,colors[BLACKO]);
    Display_Name();
    Draw4Line(380,470);
    DrawString(3,120,440,"You can either play (new) game or (Load) previous.",colors[BLACKO]);
    DrawString(3,120,420,"You will have 30 (Moves) in Simple Mode of Game.",colors[BLACKO]);
    DrawString(3,120,400,"After Completing each level (Moves) will be decreased by 3.",colors[BLACKO]);
    DrawString(3,120,380,"We have 8 different shapes in this game : ",colors[BLACKO]);
    Drawoctagon(170, 340, colors[RED]);
    DrawT(320, 340, colors[YELLOW]);
    DrawPolygon(470, 340, colors[AQUA]);
    DrawSqgem(620, 340, colors[PERU]);
    DrawDiamond(170, 300, colors[ROYAL_BLUE]);
    Square(320, 300, colors[ORANGE]);
    Circle(470, 300, colors[BLACKO]);
    Hexagon(620, 300, colors[CORN_FLOWER_BLUE]);
    DrawString(3,120,280,"This game has two Modes (Normal Mode) and (Time Mode).",colors[BLACKO]);
    DrawString(3,120,260,"By default, Normal Mode will be selected.",colors[BLACKO]);
    DrawString(3,120,240,"You can always Change Mode in the Main Menu.",colors[BLACKO]);
    DrawString(1,190,100,"Press \"B / Esc\" to go back to Main Menu.",colors[RED]);
}
void Interface::Save_game(){
    if(save == true){
        DrawString(2,300,220,"Saved Succesfully!", colors[DARK_OLIVE_GREEN]);
        system("canberra-gtk-play -f Alert_1.wav");
    }
    this_thread::sleep_for(chrono::seconds(1));
    save = false;
}
void Interface::Display_Highscores(){
    Boundary();
    Data_Highscores();
    DrawString(1,190,100,"Press \"B / Esc\" to go back to Main Menu.",colors[RED]);
}
void Interface::Change_Mode(){
    Boundary();
    Display_Name();
    DrawString(2,190,600,"Press Corresponding key (1,2) to select Game Mode.",colors[DARK_SEA_GREEN]);
    DrawString(1,290,670,"Change Game Mode",colors[ROYAL_BLUE]);
    DrawString(2,332,500,"1. Normal Mode",colors[BLACK]);
    DrawString(2,332,450,"2. Time Mode",colors[BLACK]);
    DrawString(1,190,100,"Press \"B / Esc\" to go back to Main Menu.",colors[RED]);
    if(mode == 1){
        DrawString(1,300,340,"Current Mode : Normal",colors[DARK_CYAN]);
    }else {
        DrawString(1, 300, 340, "Current Mode : Time", colors[DARK_CYAN]);
    }
}
void Interface::Display_Levels(){
    Boundary();
    DrawString(1,278,670,"LEVELS COMPLETED",colors[INDIAN_RED]);
    int y = 550;
    for(int i = 1; i<=5; i++){
        if(i<=level && level > 1) {
            DrawString(3, 300, y, "Level (" + to_string(i) + ") <-> COMPLETED", colors[DARK_GOLDEN_ROD]);
        }else {
            DrawString(3, 300, y, "Level (" + to_string(i) + ") ", colors[BLACKO]);
        }
        if(level>1){
            DrawString(3, 300, 550, "Level (1) <-> COMPLETED", colors[DARK_GOLDEN_ROD]);
        }
        y-=50;
    }
    DrawString(1,190,100,"Press \"B / Esc\" to go back to Main Menu.",colors[RED]);
}
void Interface::Display_Board(){
    glClearColor(1.0, 1.0, 1.0, 1.0 );
    glClear(GL_COLOR_BUFFER_BIT);
    DrawLine(5, 770, 795, 770, 10, colors[AQUA_MARINE]);
    DrawLine(5, 720, 795, 720, 10, colors[AQUA_MARINE]);
    DrawLine(5, 120, 795, 120, 10, colors[AQUA_MARINE]);
    DrawLine(10, 820, 10, 120, 10, colors[AQUA_MARINE]);
    DrawLine(790, 820, 790, 120, 10, colors[AQUA_MARINE]);
    DrawLine(5, 820, 795, 820, 10, colors[AQUA_MARINE]);
    for (int i = 100; i < 800; i += 100) {
        DrawLine(i, 720, i, 120, 10, colors[AQUA_MARINE]);
    }
    for (int i = 645; i > 120; i -= 75) {
        DrawLine(15, i, 785, i, 7, colors[AQUA_MARINE]);
    }
    Display_Name();
    string toselect;
    if (select == 1) {
        toselect = "Please Select a gem to swap!";
    } else if (select == 2) {
        toselect = "Selected! Now Select another gem to swap with";
    } else if (select == 3) {
        toselect = "Swapped!";
        DrawString(1, 225, 70, toselect, colors[RED]);
        select = 1;
    }
    if (createonce == false) {
        CreateBoard();
        createonce = true;
    } else if (createonce == true) {
        UpdateBoard();
        Display_Hint_on_Board();
    }
    if (givehint == true) {
        Hint_(store);
        givehint = false;
    }
    if (selection == true) {
        Draw4Line(a_x, b_y);
    }
    if(mode == 1) {
        DrawString(2, 350, 740, "Score : " + to_string(score), colors[DARK_GOLDEN_ROD]);
        DrawString(2, 30, 740, "Level : " + to_string(level), colors[DARK_MAGENTA]);
        DrawString(2, 600, 740, "Moves Remaining : " + to_string(moves), colors[ROYAL_BLUE]);
        DrawString(1, 300, 90, toselect, colors[RED]);
        DrawString(2, 20, 90, "Hints Reamaining : " + to_string(hintcount), colors[DEEP_PINK]);
        if(level == 5 && score >=100){
            board = false;
            gamecompleted = true;
        }
        if (score >= 100) {
            createonce = false;
            ResetBoard(++level,lives);
            createonce = true;
        }
        if(moves <= 0){
                lives--;
                if(lives <= 0){
                board = false;
                gameover = 1;
                }else {
                    ResetBoard(level,lives);
                }
        }
        ProgressBar();
        DrawString(3, 200, 50, "Press \"H\" for Hint and \"P\" to Pause Game!", colors[BLACK]);
        DrawString(3, 250, 30, "Press \"B\" to go back to MENU!", colors[BLACK]);
        DrawString(3, 300, 790, "Progressive Bar", colors[BLACK]);
        DrawString(3, 620, 790, "Target : 100", colors[BLACK]);
        DrawString(3, 30, 790, "Lives : "+to_string(lives), colors[BLACK]);
    }else if(mode == 2){
        DrawString(1, 270, 10, toselect, colors[RED]);
        DrawString(3, 70, 50, "Press \"H\" for Hint and \"P\" to Pause Game and \"B\" to go back to MENU!", colors[BLACK]);
        DrawString(1, 350, 90, "Score : " + to_string(score), colors[DARK_GOLDEN_ROD]);
        DrawString(1, 30, 90, "Level : " + to_string(level), colors[DARK_MAGENTA]);
        DrawString(1, 690, 90, "Hints  : " + to_string(hintcount), colors[DEEP_PINK]);
        if(level == 5 && score >=target()){
            board = false;
            gamecompleted = true;
        }
        if (time >= limit()) {
            lives--;
            if(lives <= 0){
                board = false;
                gameover = 2;
            }else{
                ResetBoard(level,lives,2);
            }
        }
        if(score >= target()){
            createonce = false;
            ResetBoard(++level,lives,2);
            createonce = true;
        }
        TimeBar();
        ProgressBar(1);
        DrawString(3, 300, 790, "Progressive Bar", colors[BLACK]);
        DrawString(3, 620, 790, "Target : "+to_string(target()), colors[BLACK]);
        DrawString(3, 350, 740, "Time : "+to_string(time)+" s", colors[BLACK]);
        if(pause == true){
        DrawString(1, 600, 740, "PAUSED", colors[RED]);
        }
        DrawString(3, 30, 790, "Lives : "+to_string(lives), colors[BLACK]);
    }
}
void Interface::Game_Over(int mod){
    glClearColor(1.0, 1.0, 1.0, 1.0 );
    glClear(GL_COLOR_BUFFER_BIT);
    DrawLine(0,0,800,0,10,colors[AQUA_MARINE]);
    DrawLine(800,0,800,850,10,colors[AQUA_MARINE]);
    DrawLine(0,0,0,850,10,colors[AQUA_MARINE]);
    DrawLine(0,850,800,850,10,colors[AQUA_MARINE]);
    DrawString(1,310,420,"!... GAME OVER ...!",colors[DARK_RED]);
    ResetBoard(1,3,mod);
    system("canberra-gtk-play -f lose.wav");
    Menu = true;
}
void Interface::Game_Completed(){
    glClearColor(1.0, 1.0, 1.0, 1.0 );
    glClear(GL_COLOR_BUFFER_BIT);
    DrawLine(0,0,800,0,10,colors[AQUA_MARINE]);
    DrawLine(800,0,800,850,10,colors[AQUA_MARINE]);
    DrawLine(0,0,0,850,10,colors[AQUA_MARINE]);
    DrawLine(0,850,800,850,10,colors[AQUA_MARINE]);
    DrawString(1,310,420,"Congratulations ..!",colors[PALE_VIOLET_RED]);
    ResetBoard(1,3,1);
    system("canberra-gtk-play -f END.wav");
    Menu = true;
}