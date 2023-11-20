#pragma once

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "utilidades.h"

using namespace std;
using namespace System;

typedef struct {
    int x, y;
    int dx, dy;
}
runnerAutoMap1;

typedef struct {
    string countryName;
    int score;
    bool active;


} country;
country countryArray[8];

int flagV[2][3]{ {1,0,2},
{1,0,2} };

int flagH[2][3]{ {1,1,1},
{0,0,0} };

void flag_PE(int flagV[2][3], int x, int y) {
    setxy(x, y);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (flagV[i][j] == 0) changeColor(0);
            if (flagV[i][j] == 1) changeColor(3);
            if (flagV[i][j] == 2) changeColor(3);
            cout << char(219);
        }
        cout << endl;
    }
    
}

void flag_MX(int flagV[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagV[i][j] == 0) changeColor(0);
            if (flagV[i][j] == 1) changeColor(6);
            if (flagV[i][j] == 2) changeColor(3);
            cout << char(219);
        }
        cout << endl;
        
    }
}

void flag_BR(int flagH[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagH[i][j] == 0) changeColor(1);
            if (flagH[i][j] == 1) changeColor(4);
            cout << char(219);
        }
        cout << endl;
    }
}

void flag_AR(int flagH[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagH[i][j] == 0) changeColor(0);
            if (flagH[i][j] == 1) changeColor(13);
            cout << char(219);
        }
        cout << endl;
    }
}

void flag_BO(int flagH[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagH[i][j] == 0) changeColor(3);
            if (flagH[i][j] == 1) changeColor(10);
            cout << char(219);
        }
        cout << endl;
    }
}

void flag_CO(int flagH[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagH[i][j] == 0) changeColor(2);
            if (flagH[i][j] == 1) changeColor(10);
            cout << char(219);
        }
        cout << endl;
    }
}

void flag_NI(int flagH[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagH[i][j] == 0) changeColor(0);
            if (flagH[i][j] == 1) changeColor(5);
            cout << char(219);
        }
        cout << endl;
    }
}

void flag_PA(int flagH[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagH[i][j] == 0) changeColor(0);
            if (flagH[i][j] == 1) changeColor(8);
            cout << char(219);
        }
        cout << endl;
    }
}

void flag_SU(int flagH[2][3]) {
    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            if (flagH[i][j] == 0) changeColor(8);
            if (flagH[i][j] == 1) changeColor(4);
            cout << char(219);
        }
        cout << endl;
    }
}

void drawMap(int map[FILAS][COLUMNAS])
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            setxy(j, i);
            if (map[i][j] == 0) changeColor(0);
            if (map[i][j] == 1) changeColor(4);
            if (map[i][j] == 2) changeColor(2);
            if (map[i][j] == 3) changeColor(3);
            if (map[i][j] == 4) changeColor(10);
            if (map[i][j] == 5) changeColor(1);
            if (map[i][j] == 6) changeColor(13);
            if (map[i][j] == 7) changeColor(14);
            cout << (char)219;
        }
    }
}




