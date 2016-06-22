#include "Console.h"
#include "Fonction.h"
#include "Langue.h"
#include <conio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int Console::visible = 1;
int Console::save = 0;

void Console::Depop(){
	HWND Stealth;
	AllocConsole();
	Stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(Stealth, 0);
	Console::visible = 0;
}

void Console::Pop(){
	HWND Stealth;
	AllocConsole();
	Stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(Stealth, 1);
	Console::visible = 1;
}

void Console::Ecrire(string output)
{
	char* tab=(char*)output.c_str();
    char buffer[256];
    CharToOemA(tab, buffer);
	cout << tab << endl;
}


void Console::Clear()
{
	system("cls");
}



void Console::OnOff()
{
	if (Console::visible)
	{
		Console::Depop();
		Console::visible = 0;
	}
	else
	{
		Console::Pop();
		Console::visible = 1;
		if (!Console::save)
		{
			ConsoleHandler();
		}
	}
}

void Console::LoadingScreen()
{
	Console::Ecrire(Langue::Textes(textes::titre));
}

void Console::Main()
{
	Console::Clear();
	Console::LoadingScreen();
	Console::Lecteur();
}



DWORD WINAPI thread_Console(LPVOID lpParameter)
{
	if (Console::visible)
	{
		Console::Main();
	}
	return 1;
}

void ConsoleHandler()
{
	DWORD thread;
	CreateThread(NULL, 0, thread_Console, NULL, 0, &thread);

}

int Console::ShiftForYes()
{
	Console::Ecrire(Langue::Textes(textes::shift_for_yes));
	int i = 1;
	while (i){
		if ((GetAsyncKeyState(VK_SHIFT) & 0x8000) || (GetAsyncKeyState(VK_RSHIFT) & 0x8000) || (GetAsyncKeyState(VK_LSHIFT) & 0x8000))
		{
			Sleep(500);
			return 1;
		}
		if (GetAsyncKeyState(VK_CONTROL) & 0x8000)
		{
			Sleep(500);
			return 0;
		}
	}
}