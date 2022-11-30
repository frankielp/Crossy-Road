#include "header/header.h"

void clear(){
    system("cls");
    textColor(255);
    gotoXY(0,0);
    for(int i = 0; i < 120*32; ++i){
        cout << ".";
    }
}

void drawMenu(int choice){
    textColor(241);
    system("cls");
    
    cout << "\n";
    cout << "\n";
    string title[6][23] = {
    {"  ","  ___  "," ","       "," ","       "," ","       "," ","       "," ","  _  _ "," ","       "," ","  ___  "," ","       "," ","       "," ","    _  "," \n"},
    {"  "," / __| "," ","   _ _ "," ","  ___  "," ","  ___  "," ","  ___  "," "," | || |"," ","  ___  "," "," | _ \\ "," ","  ___  "," "," __ _  "," "," __| | "," \n"},
    {"  ","| (__  "," ","  | '_|"," "," / _ \\ "," "," (_-<  "," "," (_-<  "," ","  \\_, |"," "," |___| "," "," |   / "," "," / _ \\ "," ","/ _` | "," ","/ _` | "," \n"},
    {"  "," \\___| "," "," _|_|_ "," "," \\___/ "," "," /__/_ "," "," /__/_ "," "," _|__/ "," "," _____ "," "," |_|_\\ "," "," \\___/ "," ","\\__,_| "," ","\\__,_| "," \n"},
    {" _","|\"\"\"\"\"|","_","|\"\"\"\"\"|","_","|\"\"\"\"\"|","_","|\"\"\"\"\"|","_","|\"\"\"\"\"|","_","| \"\"\"\"|","_","|     |","_","|\"\"\"\"\"|","_","|\"\"\"\"\"|","_","|\"\"\"\"\"|","_","|\"\"\"\"\"|"," \n"}, 
    {" \"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'","\"","`-0-0-'"," \n"}
    };
   
    for(int i = 0; i < 92; ++i){
        gotoXY(15 + i, 2);
        cout << (char) 220;
    }

    for(int i = 0; i < 6; ++i){
        gotoXY(15, 3 + i);
        cout << (char) 219;
    }

    for(int i = 0; i < 6; ++i){
        gotoXY(106, 3 + i);
        cout << (char) 219;
    }

    for(int i = 0; i < 92; ++i){
        gotoXY(15 + i, 9);
        cout << (char) 223;
    }

    for(int i = 0; i < 6; ++i){
        int y = 3 + i;
        gotoXY(16, y);

        textColor(240);
        cout << title[i][0];
        textColor(252);
        cout << title[i][1];

        textColor(240);
        cout << title[i][2];
        textColor(253);
        cout << title[i][3];

        textColor(240);
        cout << title[i][4];
        textColor(249);
        cout << title[i][5];

        textColor(240);
        cout << title[i][6];
        textColor(242);
        cout << title[i][7];

        textColor(240);
        cout << title[i][8];
        textColor(253);
        cout << title[i][9];

        textColor(240);
        cout << title[i][10];
        textColor(252);
        cout << title[i][11];

        textColor(240);
        cout << title[i][12];
        textColor(249);
        cout << title[i][13];

        textColor(240);
        cout << title[i][14];
        textColor(252);
        cout << title[i][15];

        textColor(240);
        cout << title[i][16];
        textColor(253);
        cout << title[i][17];

        textColor(240);
        cout << title[i][18];
        textColor(249);
        cout << title[i][19];

        textColor(240);
        cout << title[i][20];
        textColor(242);
        cout << title[i][21];

        textColor(240);
        cout << title[i][22];
    }

    textColor(241);
    if(choice != 0){
        gotoXY(56,15);
        cout << "NEW GAME" << endl;
    }
    else{
        string newGame[4] = {   
            "  _      ____  _           __     __    _      ____ ",
            " | |\\ | | |_  \\ \\    /    / /`_  / /\\  | |\\/| | |_  ",
            " |_| \\| |_|__  \\_\\/\\/     \\_\\_/ /_/--\\ |_|  | |_|__ ",
            "                                                    "
        };
        for(int i = 0; i < 4; ++i){
            int y = 13 + i;
            gotoXY(35, y);
            cout << newGame[i];
        }
    }

    if(choice != 1){
        gotoXY(56,19);
        cout << "LOADGAME" << endl;
    }
    else{
        string loadGame[4] = {
            "  _     ___    __    ___       __     __    _      ____ ", 
            " | |   / / \\  / /\\  | | \\     / /`_  / /\\  | |\\/| | |_  ",
            " |_|__ \\_\\_/ /_/--\\ |_|_/     \\_\\_/ /_/--\\ |_|  | |_|__ ",
            "                                                        "
        };

        for(int i = 0; i < 4; ++i){
            int y = 18 + i;
            gotoXY(33, y);
            cout << loadGame[i];
        }
    }   

    if(choice != 2){
        gotoXY(56,24);
        cout << "SETTINGS" << endl;
    }
    else{
        string setting[4] = {
            "  __   ____ _____ _____  _   _      __    __  ", 
            " ( (` | |_   | |   | |  | | | |\\ | / /`_ ( (` ",
            " _)_) |_|__  |_|   |_|  |_| |_| \\| \\_\\_/ _)_) ",
            "                                              "
        };

        for(int i = 0; i < 4; ++i){
            int y = 22 + i;
            gotoXY(37, y);
            cout << setting[i];
        }
    }      
    gotoXY(1, 1);
    cout << "ESC: EXIT";
    // clear();
    // system("pause");
}

void newGameMenu(){
    // clear();
    gotoXY(0,0);
    textColor(241);
    gotoXY(25,14);
    cout << "Good day! Please enter your name to start rocking the game: ";

}

void loadGameMenu(){
    clear();
    gotoXY(0,0);
    textColor(241);
    gotoXY(20,5);
    int y=7;
    vector<string>names=getSaveNames();
    cout <<setw(3)<< "No"<<setw(30)<<"tName"<<setw(15)<<"Level"<<setw(15)<<"HP"<<setw(15)<<"State";
    string name,level,hp,state,mx,my,finish;
    int no=1;
    ifstream f(dataroot+dataFile);
    if (names.size())
        for (string name:names){
            ifstream ifs(dataroot+name+".txt");
            ifs>>level>>mx>>my>>hp>>state>>finish;
            gotoXY(20,y);
            y+=2;
            cout<<setw(3)<<no++<<setw(30)<<name<<setw(15)<<level<<setw(15)<<hp;
            if (finish=="1")
            cout<<setw(15)<<"Win";
            else if (state=="1")
            cout<<setw(15)<<"Playing";
            else if (state=="0")
            cout<<setw(15)<<"Lose";
            ifs.close();
        }
    else
        {gotoXY(20,7); cout<<"Empty";}

    //gotoXY(20,3);
    //cout<<"Type No of playing players to load game or 0 to back:                ";
    //gotoXY(75, 3);
    //unhidePointer();
    //_getch();
}

void settingsMenu(){
    clear();
    gotoXY(0,0);
    textColor(241);
    int x = 50, y = 14;
    gotoXY(1, 1);
    cout << "ESC TO BACK";
    gotoXY(55, 12);
    cout << "SETTING";
    gotoXY(x,y);
    cout << "MUSIC: ";
    if (checkSound) cout << "ON ";
    else cout << "OFF";
    gotoXY(x, y + 2);
    cout << "PRESS BACKSPACE TO RESET GAME";
    gotoXY(x, y + 4);
    cout << "PRESS ENTER TO CHANGE MUSIC";
    while (1)
    {
        if (!_kbhit())
        {
            Tap();
            int c = _getch();
            if (c == ESC) break;
            else if (c == ENTER)
            {
                checkSound = !checkSound;
                gotoXY(x, y);
                cout << "MUSIC: ";
                if (checkSound) cout << "ON ";
                else cout << "OFF";
            }
            else if (c == BACKSPACE)  //X
            {
                resetMenu();
                resetGame();
                clear();
                gotoXY(0, 0);
                textColor(241);
                int x = 50, y = 14;
                gotoXY(1, 1);
                cout << "ESC TO BACK";
                gotoXY(55, 12);
                cout << "SETTING";
                gotoXY(x, y);
                cout << "MUSIC: ";
                if (checkSound) cout << "ON ";
                else cout << "OFF";
                gotoXY(x, y + 2);
                cout << "PRESS BACKSPACE TO RESET GAME";
                gotoXY(x, y + 4);
                cout << "PRESS ENTER TO CHANGE MUSIC";
            }

        }
    }
}
void resetMenu(){
    clear();
    gotoXY(0,0);
    textColor(241);
    gotoXY(25,14);
    cout << "Do you really want to reset all the data? (y/n): ";
}
void pauseMenu(){
    clear();
    gotoXY(0,0);
    textColor(241);
    gotoXY(25,14);
    cout << "Do you want to exit? (y/n): ";
}
void saveGameMenu(){
    clear();
    gotoXY(0,0);
    textColor(241);
    gotoXY(25,14);
    cout << "Save your process? (y/n): ";
}

string getSaveGame(vector<string> name){
    int n=name.size();
    if (!n) throw "No save file";
    int choice=-1;
    while (1){
        gotoXY(20,7+n*2+3);
        cout << "Please enter the playing save file (1-" << n << ", 0 to cancel): ";
        cin >> choice;
        Enter();
        if (choice && (choice<1 || choice>n)) {
            gotoXY(20,7+2+n+2);
            cout << "Sorry, the save file is not available! Please input again\n";
        }
        else break;
    }
    if (choice) return name[choice-1];
    else throw "Player cancel";
}

vector<string> getSaveNames(){
    vector<string> names;
    ifstream f(dataroot+dataFile);
    if (f)
        while (!f.eof())
        {
            string name;
            getline(f,name,'\n');
            if (name=="") break;
            names.push_back(name);
        }
    f.close();
    return names;
}

bool checkNameIsExist(string name){
    if (name=="dataFile") return 1;
    vector<string> names=getSaveNames();
    if (!names.size()) return 0;
    for (string n:names){
        if (n==name) return 1;
    }
    return 0;
}