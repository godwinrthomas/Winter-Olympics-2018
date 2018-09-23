/*  name : godwin richard thomas
 *  csci 689/0001
 *  ta name : nithin devang
 *  assignment number : 3
 *  due date : 01/03/2018
 */

#include "Main.h"


int main()
{
	//vector definition of all the classes
	
	vector<Athlete> v_athlete;
	vector<Country> v_country;
	vector<Event> v_event;
	vector<Sport> v_sport;

	
	// file input
	ifstream inp;
	string Filename;
	
	cout<<"Please enter the name of the File: ";
	cin>>Filename;

	
	// file is opened
	
	inp.open(Filename,ios::binary);
	
	// error handling if file not opened
	if(!inp)
	{
		cerr<<"\nCannot open the file, please try again\n";
		exit(1);
	}
	
	// read the binary file by the order of countres, sport, athletes, events
	// after reading, stores them in vector acordingly
	int no_of_countries;
	inp.read((char *) &no_of_countries, sizeof(no_of_countries));
	

	v_country.reserve(no_of_countries);
	int i;
	Country country_object;
	for(i=0;i<no_of_countries;i++)
	{
		inp.read((char *) &country_object, sizeof(country_object));
		v_country.push_back(country_object);
	}
	
	
	int no_of_sports;
	inp.read((char *) &no_of_sports, sizeof(no_of_sports));
	

	v_sport.reserve(no_of_sports);
	int j;
	Sport sport_object;
	for(j=0;j<no_of_sports;j++)
	{
		inp.read((char *) &sport_object, sizeof(sport_object));
		v_sport.push_back(sport_object);
	}
	

	int no_of_athletes;
	inp.read((char *) &no_of_athletes, sizeof(no_of_athletes));
	
	v_athlete.reserve(no_of_athletes);
	int k;
	Athlete athlete_object;
	
	for(k=0;k<no_of_athletes;k++)
	{
		inp.read((char *)&athlete_object,sizeof(athlete_object));
		v_athlete.push_back(athlete_object);
	}
		
	int no_of_events;
	inp.read((char *) &no_of_events, sizeof(no_of_events));
	
	v_event.reserve(no_of_events);
	Event event_object;
	int l;
	
	for(l=0;l<no_of_events;l++)
	{
		inp.read((char *)&event_object, sizeof(event_object));
		v_event.push_back(event_object);
	}
	
	inp.close();

	// asks the user to enter an option for displaying data
	
	int option;
	// label used so user can reinput
	LABEL:cout<<"1)Print Countries \n2)Print Sports \n3)Print Athletes by name \n4)Print Athletes by Country \n5) Print ranking by sport\n6)Exit\n";
	cin>>option;
	
	// switch case with the input
	switch(option)
	{
		case 1:
			for(i=0;i<no_of_countries;i++)
			{
				v_country[i].print();
			}
			goto LABEL;
		case 2:
			for(j=0;j<no_of_sports;j++)
			{
				v_sport[j].print();
			}
			goto LABEL;
		case 3:
			{
				print_athletes_by_name(v_athlete, v_country);
			}
		
			goto LABEL;

		case 4:
			{
				print_athletes_by_country(v_athlete, v_country);
			}
			goto LABEL;
		
		case 5:
			{	
				print_ranking_by_sport(sport_object.select_sport(v_sport, v_sport.size()), v_sport, v_event, v_athlete, v_country);
			}
			goto LABEL;
		case 6:
			{
				cout<<"\n You have chosen to exit\n";
				exit(1);
			}
					
		default:
			cerr<<"You have entered an invalid input. Please try again\n";
			goto LABEL;
	}
	return 0;
		
}

// prints the athlete by order of country
void print_athletes_by_country(vector<Athlete> &v_athlete, vector<Country> &v_country)
{
	int i;

	// using the indice value, prints in the order
	for(i = v_athlete[0].get_next_by_country(); i>-1;)
	{
		cout<< v_country[v_athlete[i].get_country()].get_country_code() <<" "<< v_athlete[i].get_last_name() <<","<< v_athlete[i].get_first_name() <<endl;
		i = v_athlete[i].get_next_by_country();
	}
}

// prints the athlete by order of name
void print_athletes_by_name(vector<Athlete> &v_athlete, vector<Country> &v_country)
{
	int i;
	for(i= v_athlete[0].get_next_by_name(); i>-1;)
	{
		cout<< v_athlete[i].get_first_name() <<","<< v_athlete[i].get_last_name() <<" "<< v_country[v_athlete[i].get_country()].get_country_code() <<endl;
		i = v_athlete[i].get_next_by_name();
	}
}

// prints the ranking of sport and asks to select a sport and display data
void print_ranking_by_sport(int k, vector<Sport> &v_sport, vector<Event> &v_event, vector<Athlete> &v_athlete, vector<Country> &v_country)
{
	v_sport[k].print();
	int i;
	for(i= v_sport[k].set_event(); i>-1;)
	{
		v_event[i].print(v_athlete, v_country);
		i = v_event[i].get_next_event_index();
	}	
	
}


