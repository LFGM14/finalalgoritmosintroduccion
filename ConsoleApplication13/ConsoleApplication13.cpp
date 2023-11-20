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
#define FILAS 25
#define COLUMNAS 80

using namespace std;
using namespace System;

int milisegundos = 0;
int segundos = 0;

void gameStart() {
	int yPosRunnersMap1[4] = { 8, 12, 16, 20 };
	int xPosRunners = 0;
	float dxRunnersMap1[4];
	int dyRunnersMap1 = 0;
	for (int i = 0; i < 4; i++) {
		dxRunnersMap1[i] = rand() % 2;
	}


}

int main() {
	Console::SetWindowSize(80, 25);
	srand(time(NULL));
    char tecla;
    int x= 20; int y= 1;
    int cant_pasos = 0;
    int hist_x[800];
    int hist_y[800];
    while (1) {
        system("cls");
        if (_kbhit()) {
            tecla = _getch();

            if (tecla == 'X') cant_pasos++;
        }
        setxy(x, y);
        cout << cant_pasos;
        milisegundos++;
        if (milisegundos == 26) {
            segundos++;
            milisegundos = 0;
        }
        if (segundos == 10) break;
        _sleep(10);
    }

	
	system("pause>0");
	return 0;
}




