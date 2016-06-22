#include "Console.h"
#include "Fonction.h"
#include "Langue.h"
#include <conio.h>
#include "Commande.h"
#include <string.h>
#include <iostream>
#include "Spam.h"
#include <string>
#include "Saturne.h"
#include <Windows.h>
using namespace std;

string Console::Lire()
{
	string fnord;
	getline(cin, fnord);
	return fnord;
}

void Console::Lecteur()
{
	string fnord = Console::Lire();
	commande cmd = commande(fnord);
	fonction ilveutquoicecon = StringToFonction(cmd.fonction);
	Console::Clear();
	switch (ilveutquoicecon){
	case fonction::note :
		break;
	case fonction::agenda :
		break;
	case fonction::matrix :
		Matrix();
		break;
	case fonction::close :
		Console::OnOff();
		break;
	case fonction::spam :
		spamModule::main(cmd);
		Console::Depop();
		break;
	case fonction::fnord:
		Console::Ecrire(Saturne::getNowString());
		cin.get();
		break;
	default:
		Console::Main();
		break;
	}
}

