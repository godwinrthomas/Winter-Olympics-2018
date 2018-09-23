// header guards
#ifndef COUNTRY_H
#define COUNTRY_H


#include <iostream>
using std::cout;
using std::endl;
#define codeSize 4
#define nameSize 34
class Country
{

	char country_code[codeSize];
	char country_name[nameSize];
	
	public:
	char* get_country_code();
	char* get_country_name();
	void print(); // prints the country code and country name
};

#endif
