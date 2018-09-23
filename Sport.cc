#include "Sport.h"

char* Sport::set_sport_name()
{
	return sport_name;
}
int Sport::set_event()
{
	return event;
}

void Sport::print()
{
	cout<<sport_name<<endl;
}

// selects the sport along with the number
int Sport::select_sport(vector<Sport> &v_sport, int k)
{
	int i;
	
	// prints the sport along with number
	for(i=0;i<k;i++)
	{
		cout<<i<<")"<<" ";
		v_sport[i].print();
	}
	int input_sport_number;

	//inputs the number from the user
	cout<<"\n Enter the number for the Sport to be viewed";
	cin>>input_sport_number;

	//error handling
	if(input_sport_number<0)
	{
		cerr<<"\n The number is negative. Please enter a positive number.Please try again";
		exit(1);
	}
	else if(input_sport_number>=k)
	{
		cerr<<"\n Enter a number within the range given above. Please try again.";
		exit(1);
	}
	return input_sport_number;
	
}

