//header guard
#ifndef MAIN_H
#define MAIN_H

// header files
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>

// class definitions
#include "Athlete.h"
#include "Country.h"
#include "Sport.h"
#include "Event.h"

// scope
using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::ios;
using std::cerr;
using std::endl;
using std::cerr;
using std::string;

// function prototypes
void print_athletes_by_country(vector<Athlete> &va, vector<Country> &vc); // prints the athletes by the order of country
void print_athletes_by_name(vector<Athlete> &va, vector<Country> &vc); // prints the athletes by the order of name
void print_ranking_by_sport(int sport, vector<Sport> &vs, vector<Event> &ve, vector<Athlete> &va, vector<Country> &vc); // prints the ranking by sport

#endif
