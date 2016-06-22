#include "Fonction.h"
#include "Console.h"
#include "Interupteur.h"

#include <conio.h>
#include <string.h>
#include <iostream>
#include <exception>
#include <windows.h>
#include <ctime>
#include <map>
#include <vector>
#include "Langue.h"
#include <chrono>
#include "Saturne.h"

using namespace std;


void Initialize(){
	Console::OnOff();
	InterupteurHandler();
	ConsoleHandler();
	SaturneHandler();
}

int main(int argc, char** argv)
{
	Initialize();
	while (1)
	{
		

	}


	return 1;
}
