#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <Windows.h>
#include "Spam.h"
#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x0500
#define X 123
#define Y 123
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 800
#define REFRESH 200
#define TOUCH VK_SHIFT
#include "Console.h"
#include "Langue.h"

int spamModule::lock = 0;
int spamModule::x = 0;
int spamModule::y = 0;

void spamModule::LeftClick()
{
	INPUT    Input = { 0 };
	// left down 
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	::SendInput(1, &Input, sizeof(INPUT));

	// left up
	::ZeroMemory(&Input, sizeof(INPUT));
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	::SendInput(1, &Input, sizeof(INPUT));
}

void spamModule::Spam()
{
	spamModule::LeftClick();
	Sleep(REFRESH);
}


void spamModule::LockSpam()
{
	SetCursorPos(spamModule::x, spamModule::y);
	spamModule::LeftClick();
	Sleep(REFRESH);
}

int spamModule::boucle(){
	int i = 1;
	while (i)
	{
		if ((GetAsyncKeyState(VK_CONTROL) & 0x8000))
		{
			return 0;
		}
		if ((GetAsyncKeyState(VK_SHIFT) & 0x8000) || (GetAsyncKeyState(VK_RSHIFT) & 0x8000) || (GetAsyncKeyState(VK_LSHIFT) & 0x8000))

		{
			i = 0;

		}
		if (spamModule::lock)
		{
			spamModule::LockSpam();
		}
		else
		{
			spamModule::Spam();
		}
	}
	Sleep(500);
	return 1;
}


std::string spamModule::ask(){
	std::string fnord;
	Console::Ecrire(Langue::Textes(textes::spamModule_lock));
	if (Console::ShiftForYes())
	{
		fnord += "L";
	};
	Console::Clear();
	return fnord;
}

void spamModule::lockfunction()
{
	POINT pos = { 0 };
	GetCursorPos(&pos);
	spamModule::x = pos.x;
	spamModule::y = pos.y;


}

void spamModule::main(commande& cmd){
	if (cmd.arg == "")
	{
		cmd.arg = spamModule::ask();
	}
	Console::Ecrire(Langue::Textes(textes::shift_pause));
	Console::Ecrire(Langue::Textes(textes::ctrl_stop));
	spamModule::lock = 0;
	if (cmd.DoesArgExist("L"))
	{
		lockfunction();
		spamModule::lock = 1;
	}
	int i = 1;
	int j = 1;
	system("pause");
	while (i){
		if (j == 1)
		{
			int x = spamModule::boucle();
			if (x){
				j = 0;
			}
			else
			{
				return void();
			}
		}
		if ((GetAsyncKeyState(VK_SHIFT) & 0x8000) || (GetAsyncKeyState(VK_RSHIFT) & 0x8000) || (GetAsyncKeyState(VK_LSHIFT) & 0x8000))
		{
			j = 1;
			Sleep(500);
		}
		if ((GetAsyncKeyState(VK_CONTROL) & 0x8000))
		{
			return void();
		}
	}


}
