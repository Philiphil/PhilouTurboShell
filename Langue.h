#pragma once
#include <map>
#include <string>
#include <Windows.h>

enum language{
	en, fr
};

enum textes{
	welcome=0, titre, 
	spamModule_nom, spamModule_lock, spamModule_touchstop, spamModule_stopped,
	shift_for_yes, yes_no, shift_stop, relaunch, shift_pause, ctrl_stop, shift_start,
	Mon, Tue, Wed, Thu, Fri, Sat, Sun,
	Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};


class Langue{
public :
	static const language langue = en;
	static std::string Textes(textes);

};
