#include "Country.h"
char* Country::get_country_code()
{
	return country_code;
}

char* Country::get_country_name()
{
	return country_name;
}

// prints the country code and country name
void Country::print()
{
	cout<<country_code<<" "<<country_name<<endl;
}
