// constants
#define scoreSize 25
#define athSize 4

// header files
#include <iostream>
#include <iomanip>
#include <vector>
#include <iomanip>

using std::vector;
using std::setw;
using std::endl;

//class definitions
#include "Athlete.h"
#include "Country.h"

class Event
{
	// data members
	int sport_index;
	int country_index;
	char score[scoreSize];
	int athlete[athSize];
	int ranking_athlete;
	int next_event_index;
	public:
	
	// methods
	int get_next_event_index();
	
	void print(vector<Athlete> &v_athlete, vector<Country> &v_country);
};
