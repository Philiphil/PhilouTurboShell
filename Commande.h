#pragma once
#include <string>

class commande{
public :
	std::string fonction;
	std::string arg;
	std::string instruction;
	commande();
	commande(std::string);
	bool DoesArgExist(std::string);
	void seeCommande();
};