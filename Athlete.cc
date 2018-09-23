#include "Athlete.h"
char* Athlete::get_first_name()
{
	return first_name;
}
char* Athlete::get_last_name()
{
	return last_name;
}
int Athlete::get_country()
{
	return country;
}
int Athlete::get_next_by_name()
{
	return next_by_name;
}
int Athlete::get_next_by_country()
{
	return next_by_country;
}

// prints the first name and last name of the athlete
void Athlete::print()
{
	cout<<first_name<<" "<<last_name<<endl;
}
