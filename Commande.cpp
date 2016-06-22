#include "Console.h"
#include "Fonction.h"
#include "Langue.h"
#include <conio.h>
#include "Commande.h"
#include <string.h>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

commande::commande(string fnord)
{
	int x = fnord.find(" ");//des qu'il y a un espace, le type est entier
	fonction = fnord.substr(0, x);
	fnord.erase(0, x + 1);
	//
	if (fnord.substr(0, 1) == "-")
	{
		int y;
		fnord.erase(0, 1);
		y = (fnord.find(" ") >= 0 ? fnord.find(" ") : fnord.length());
		arg = fnord.substr(0, y);
		fnord.erase(0, (y>=0 ? y+1: y));
	}
	else {
		arg = "";
	}
	instruction = fnord;
}

bool commande::DoesArgExist(string fnord)
{
	return arg.find(fnord)>= 0;
}

void commande::seeCommande()
{
	cout << fonction <<" "<< (arg != "" ? "-" + arg : arg) << " "<<instruction << endl;
}
