// header guard
#ifndef ATHLETE_H
#define ATHLETE_H

#include <iostream>

// constant
#define maxsize 30
using std::cout;
using std::endl;
class Athlete
{
	char first_name[maxsize];
	char last_name[maxsize];
	int country;
	int next_by_name;
	int next_by_country;
	
	public:

	char* get_first_name();
	char* get_last_name();
	int get_country();
	int get_next_by_name();
	int get_next_by_country();
	void print();
};

#endif
