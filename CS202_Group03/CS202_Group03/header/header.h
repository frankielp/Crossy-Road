#ifndef headerh
#define headerh
//Library
#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include <Windows.h>
#include <mmsystem.h>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <thread>
#include <chrono>
#include <stdio.h>
//Local header file
#include "Sound.h"
#include "config.h"
#include "console.h"
#include "ctraffic.h"
#include "cobstacle.h"
#include "canimal.h"
#include "cvehicle.h"
#include "cpeople.h"
#include "clane.h"
#include "cgame.h"
#include "menu.h"

using namespace std;
using namespace std::chrono; //timing
// using std::filesystem::directory_iterator; //file iter
extern bool checkSound;

//Config
#define freezing_time   3
#define traffic_stop    2
const string dataroot = "data/";
const string dataFile = "dataFile.txt";
#endif 