#include "Langue.h"
#include <map>
#include <string.h>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


string Langue::Textes(textes fnord)
{
	map <language, map<textes, string> > texte;
	texte[language::en][textes::welcome] = "hi";
	texte[language::fr][textes::welcome] = "slt";

	texte[language::fr][textes::titre] = "PHILOU'S TURBO SHELL";
	texte[language::en][textes::titre] = "PHILOU'S TURBO SHELL";

	texte[language::en][textes::yes_no] = "Y/N ?";
	texte[language::fr][textes::yes_no] = "O/N";

	texte[language::en][textes::shift_for_yes] = "Shift : Yes, Ctrl : No";
	texte[language::fr][textes::shift_for_yes] = "Shift : Oui, Ctrl : Non";

	texte[language::en][textes::shift_pause] = "Shift : sleep";
	texte[language::fr][textes::shift_pause] = "Shift : pause";

	texte[language::en][textes::ctrl_stop] = "ctrl : stop";
	texte[language::fr][textes::ctrl_stop] = "ctrl : stop";


	texte[language::en][textes::shift_start] = "Shift : start";
	texte[language::fr][textes::shift_start] = "Shift : start";

	texte[language::en][textes::shift_stop] = "Shift for stop";
	texte[language::fr][textes::shift_stop] = "Shift for stop";

	texte[language::en][textes::relaunch] = "Again ?";
	texte[language::fr][textes::relaunch] = "Relancer fonction ?";

	texte[language::fr][textes::spamModule_lock] = "Verouiller curser ?";
	texte[language::en][textes::spamModule_lock] = "Lock Cursor ?";

	texte[language::en][textes::spamModule_lock] = "Lock Cursor ?";

	texte[language::en][textes::Mon] = "Monday";
	texte[language::fr][textes::Mon] = "Lundi";

	texte[language::en][textes::Wed] = "Wednesday";
	texte[language::fr][textes::Wed] = "Mecredi";

	texte[language::en][textes::Thu] = "Thursday";
	texte[language::fr][textes::Thu] = "Jeudi";

	texte[language::en][textes::Fri] = "Friday";
	texte[language::fr][textes::Fri] = "Vendredi";

	texte[language::en][textes::Sat] = "Saturday";
	texte[language::fr][textes::Sat] = "Samedi";

	texte[language::en][textes::Sun] = "Sunday";
	texte[language::fr][textes::Sun] = "Dimanche";


	texte[language::en][textes::Tue] = "Tuesday";
	texte[language::fr][textes::Tue] = "Mardi";
	/**/

	texte[language::en][textes::Jan] = "January";
	texte[language::fr][textes::Jan] = "Janvier";

	texte[language::en][textes::Feb] = "February";
	texte[language::fr][textes::Feb] = "Fevrier";

	texte[language::en][textes::Mar] = "March";
	texte[language::fr][textes::Mar] = "Mars";

	texte[language::en][textes::Apr] = "April";
	texte[language::fr][textes::Apr] = "Avril";

	texte[language::en][textes::May] = "May";
	texte[language::fr][textes::May] = "Mai";

	texte[language::en][textes::Jun] = "June";
	texte[language::fr][textes::Mon] = "Juin";

	texte[language::en][textes::Wed] = "Wednesday";
	texte[language::fr][textes::Wed] = "Mecredi";

	texte[language::en][textes::Thu] = "Thursday";
	texte[language::fr][textes::Thu] = "Jeudi";

	texte[language::en][textes::Jul] = "July";
	texte[language::fr][textes::Jul] = "Juillet";

	texte[language::en][textes::Aug] = "August";
	texte[language::fr][textes::Aug] = "Aout";

	texte[language::en][textes::Sep] = "September";
	texte[language::fr][textes::Sep] = "Septembre";



	texte[language::en][textes::Oct] = "October";
	texte[language::fr][textes::Oct] = "Octobre";

	texte[language::en][textes::Nov] = "November";
	texte[language::fr][textes::Nov] = "Novembre";


	texte[language::en][textes::Dec] = "December";
	texte[language::fr][textes::Dec] = "Decembre";
	return texte[Langue::langue][fnord];
	
}
