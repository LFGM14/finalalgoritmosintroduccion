#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "utilidades.h"
#include "mapsAndRunners.h"
#include "startAndEndScreens.h"

using namespace std;
using namespace System;

#define FILAS 25
#define COLUMNAS 80
#define rightMov 77
#define leftMov 75
#define upMov 72
#define downMov 80
#define jumpMov 32

void gameStart() {

}

int main() {
    Console::SetWindowSize(80, 25);
    srand(time(NULL));

    //dibujar_mapa(map1);
    flag_SU(flagH, 10, 10);

    system("pause>0");

    /*drawStart(start);*/


	return 0;
}



