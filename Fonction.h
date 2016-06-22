#pragma once
#include <string>
void Initialize();
int main(int, char**);

/**/

enum fonction{
	note,
	agenda,
	fnord,
	matrix,
	chaos,
	close,
	spam
};

fonction StringToFonction(std::string);
void Matrix();

struct thread_data
{
	int m_id;
	thread_data(int id) : m_id(id) {}
};