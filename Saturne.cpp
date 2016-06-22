#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include "Saturne.h"
#include <string>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdio>
#include <ctime>
#include "Console.h"

time_t Saturne::now = NULL;

void Saturne::setNow(){
	using std::chrono::system_clock;
	system_clock::time_point today = system_clock::now();
	Saturne::now = system_clock::to_time_t(today);
}

time_t Saturne::getNow(){
	Saturne::setNow();
	return Saturne::now;
}

std::string Saturne::getNowString(){
	using namespace std::chrono;
	char str[26];
	ctime_s(str, sizeof str, &Saturne::now);
	return str;
}

std::string Saturne::getReadbleTime(time_t fnord)
{
	using namespace std::chrono;
	char str[26];
	ctime_s(str, sizeof str, &fnord);
	std::string striged = str;
	int x = striged.find(" ");//des qu'il y a un espace, le type est entier
	/*	req.fonction = fnord.substr(0, x);
	fnord.erase(0, x + 1);
	*/

	return str;
}



DWORD WINAPI thread_saturne(LPVOID lpParameter)
{
	while (1)
	{
		Saturne::getNow();
		Sleep(500);
	}

}

void SaturneHandler()
{
	DWORD thread;
	CreateThread(NULL, 0, thread_saturne, NULL, 0, &thread);

}