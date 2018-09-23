//header guard
#ifndef SPORT_H
#define SPORT_H

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::cin;
using std::cerr;

#define sportSize 60
class Sport
{
	char sport_name[sportSize];
	int  event;

	public:
	
	char* set_sport_name();
	int set_event();
	void print();
	int select_sport(vector<Sport> &v_sport, int k); // selects the sport along with the number
};

#endif
