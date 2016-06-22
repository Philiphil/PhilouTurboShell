#pragma once
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <string>
#include <Windows.h>

class Saturne{
private:
	static std::time_t now;
public:
	static void setNow();
	static std::time_t getNow();
	static std::string getNowString();
	static std::string getReadbleTime(time_t);
};



DWORD WINAPI thread_Saturne(LPVOID);
void SaturneHandler();
