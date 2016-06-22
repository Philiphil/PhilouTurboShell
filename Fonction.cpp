#include "Fonction.h"
#include "Console.h"
#include <map>
#include <string.h>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

fonction StringToFonction(string fnord)
{
	map<string, fonction> foo;
	foo["note"] = fonction::note;

	foo["agenda"] = fonction::agenda;
	foo["agd"] = fonction::agenda;
	foo["calendrier"] = fonction::agenda;

	foo["matrix"] = fonction::matrix;

	foo["spam"] = fonction::spam;

	foo["close"] = fonction::close;
	foo["exit"] = fonction::close;
	foo["²²"] = fonction::close;
	foo["hide"] = fonction::close;

	foo["fnord"] = fonction::fnord;
	fonction retour = foo[fnord];
	if (retour == NULL)
	{
		retour = fonction::chaos;
	}

	return retour;
}

void Matrix()
{
	cout << "Wake up, Neo ...";
	Sleep(3000);
	system("cls");
	cout << "T";
	Sleep(200);
	cout << "h";
	Sleep(200);
	cout << "e";
	Sleep(200);
	cout << " ";
	Sleep(200);
	cout << "M";
	Sleep(200);
	cout << "a";
	Sleep(200);
	cout << "t";
	Sleep(200);
	cout << "r";
	Sleep(200);
	cout << "i";
	Sleep(200);
	cout << "x";
	Sleep(200);
	cout << " ";
	Sleep(200);
	cout << "h";
	Sleep(200);
	cout << "a";
	Sleep(200);
	cout << "s";
	Sleep(200);
	cout << " ";
	Sleep(200);
	cout << "y";
	Sleep(200);
	cout << "o";
	Sleep(200);
	cout << "u";
	Sleep(200);
	cout << " ";
	Sleep(200);
	cout << ".";
	Sleep(200);
	cout << ".";
	Sleep(200);
	cout << ".";
	Sleep(1500);
	system("cls");
	cout << "Follow the white rabbit.";
	Sleep(2000);
	system("cls");
	cout << "Knock, knock, Neo.";
	Sleep(1500);
	system("cls");

	Console::Main();
}