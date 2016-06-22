#pragma once
#include <string>
#include "Commande.h"
#include <Windows.h>

class Console{
	/*
		Classe singleton : Manipule les evenements de console.
	*/
public:
	static int visible;
	static int save;
	static void Console::Depop();
	static void Console::Pop();
	static void Console::Ecrire(std::string);
	static void Console::Clear();
	static void Console::OnOff();
	static void Console::LoadingScreen();
	static void Console::Main();
	static int Console::ShiftForYes();
	//-Lecture de commande
	static std::string Console::Lire();
	static void Console::Lecteur();
};

DWORD WINAPI thread_Console();
void ConsoleHandler();
