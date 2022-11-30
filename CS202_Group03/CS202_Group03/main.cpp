#include "header/header.h"

using namespace std;


char MOVING;
bool IS_RUNNING = 1;

bool checkSound = true;

int main()
{
    int temp;
    hidePointer();
    fixConsoleWindow();
    setConsoleWindow(930, 520);
    int choice = 0, c;
    CGAME g;
    BackGround();
    while(1){
        drawMenu(choice);
        switch (c = _getch()) {
            case UP:
                Bird();
                choice = (choice + 3) % 4;
                break;

            case DOWN:
                Tap();
                choice = (choice + 1) % 4;
                break;

            case ENTER:
                Enter();
                switch (choice) {
                case 0:
                    g.newGame();
                    g.startGame();
                    g.terminate(1);
                    break;

                case 1:
                    try {
                        g.loadGame();
                        g.startGame();
                        g.terminate(1);
                    }
                    catch (...) {
                        clrscr();
                        gotoXY(25, 11);
                        cout << "Press any key to go back to the main menu";
                        _getch();
                    }
                    break;

                case 2:
                    settingsMenu();
                    break;

                default:
                    break;
                }

                break;


            case ESC:
                exit(1);
                break;
        }
    }
    
    return 0;
}