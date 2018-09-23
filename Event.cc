#include "Event.h"

// returns the next event index
int Event::get_next_event_index()
{
	return next_event_index;
}

// prints the members who participated along with the score ranking and country

void Event::print(vector<Athlete> &v_athlete, vector<Country> &v_country)
{
	
	cout<< v_country[country_index].get_country_code() <<" "<< setw(3) << ranking_athlete <<" "<< score <<" ";
	int i;
	
	cout<< v_athlete[athlete[0]].get_last_name() <<", "<< v_athlete[athlete[0]].get_first_name() <<"; ";
	
	cout<<"\n";

	
}


