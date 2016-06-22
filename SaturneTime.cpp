#include <string>
#include "SaturneTime.h"
#include <ctime>
#include <map>
using namespace std;



SaturneTime::SaturneTime(time_t fnord){
	char str[26];
	ctime_s(str, sizeof str, &fnord);
	std::string striged = str;
	int x = striged.find(" ");
	string tmp = striged.substr(0, x);
	striged.erase(0, x + 1);
	jour = StringToFonction_jour(tmp);

	x = striged.find(" ");
	tmp = striged.substr(0, x);
	striged.erase(0, x + 1);
	mois = StringToFonction_mois(tmp);

}


Jours StringToFonction_jour(std::string fnord)
{
	map<string, Jours> foo;
	foo["Mon"] = Jours::Mon;
	foo["Tue"] = Jours::Tue;
	foo["Wed"] = Jours::Wed;
	foo["Thu"] = Jours::Thu;
	foo["Fri"] = Jours::Fri;
	foo["Sat"] = Jours::Sat;
	foo["Sun"] = Jours::Sun;
	Jours retour = foo[fnord];
	return retour;
}

Mois StringToFonction_mois(std::string fnord)
{
	map<string, Mois> foo;
	foo["Jan"] = Mois::Jan;
	foo["Feb"] = Mois::Feb;
	foo["Mar"] = Mois::Mar;
	foo["Apr"] = Mois::Apr;
	foo["May"] = Mois::May;
	foo["Jun"] = Mois::Jun;
	foo["Jul"] = Mois::Jul;
	foo["Aug"] = Mois::Aug;
	foo["Sep"] = Mois::Sep;
	foo["Oct"] = Mois::Oct;
	foo["Nov"] = Mois::Nov;
	foo["Dec"] = Mois::Dec;
	Mois retour = foo[fnord];
	return retour;
}

