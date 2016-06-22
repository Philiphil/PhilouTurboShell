#pragma once
#include <string>
#include <ctime>

enum Jours{
	Mon = 0, Tue, Wed, Thu, Fri, Sat, Sun
};

enum Mois{
	Jan = 0, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

class SaturneTime{
public:
	Jours jour;
	Mois mois;
	int annee;
	int minutes;
	int heures;

	SaturneTime();
	SaturneTime(std::time_t);//
	~SaturneTime();//
};


Jours StringToFonction_jour(std::string);
Mois StringToFonction_mois(std::string);