#include "Interupteur.h"
#include <conio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <ctime>
#include "Console.h"
using namespace std;


void Interupteur(){
	while (1){
		if (GetAsyncKeyState(0xDE) & 0x8000)
		{
			std::clock_t start;
			double duration;
			start = std::clock();
			Sleep(200);
			duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
			if ((GetAsyncKeyState(0xDE) & 0x8000) && duration <0.4)
			{
				Sleep(100);
				Console::OnOff();
			}
		}
	}
}


DWORD WINAPI thread_Interupteur(LPVOID lpParameter)
{
	Interupteur();
	return 1;
}

void InterupteurHandler()
{
	DWORD thread;
	CreateThread(NULL, 0, thread_Interupteur, NULL, 0, &thread);

}