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

	//dibujar_mapa(map2);
	//flag_PE(flagV);
	//flag_MX(flagV);
	//flag_AR(flagH);
	//flag_BO(flagH);
	//flag_BR(flagH);
	//flag_CO(flagH);
	//flag_NI(flagH);
	//flag_PA(flagH);
	flag_SU(flagH);
	
	system("pause>0");
	return 0;
}




