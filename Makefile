test: main.cc Athlete.cc Country.cc Sport.cc Event.cc
	g++ -std=c++11 -o test main.cc Athlete.cc Country.cc Sport.cc Event.cc

clean: 
	rm *.o test
