#pragma once
#include <string>
#include <Windows.h>
#include "Commande.h"

class spamModule{
public:
	static int lock;
	static int x;
	static int y;
	static void spamModule::main(commande&);
	static std::string spamModule::ask();
	static void spamModule::LeftClick();
	static void spamModule::Spam();
	static void spamModule::LockSpam();
	static int spamModule::boucle();
	static void spamModule::lockfunction();
};