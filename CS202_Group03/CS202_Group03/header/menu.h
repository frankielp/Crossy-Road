#ifndef menuh
#define menuh
#include "header.h"

void clear();
void drawMenu(int choice);

void newGameMenu();
void loadGameMenu();
void settingsMenu();
void mainMenu();
void resetMenu();
void pauseMenu();
void saveGameMenu();

vector<string> getSaveNames();
string getSaveGame(vector<string> name);
bool checkNameIsExist(string name);

#endif