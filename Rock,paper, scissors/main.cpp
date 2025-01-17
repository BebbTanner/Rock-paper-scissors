/*
Rock paper scissors game.

rock > scissors
scissors > paper
paper > rock

*/

#include <iostream>
#include <ctime> //time based seeding
#include <cstdlib> //rand and srand
using namespace std;

int main() {
	//String array that has the three opitions. This will be what the CPU player will choose from. 
	string options[3] = { "rock", "papper", "scissors" };

	//This is the command that is setting the seeding to 0.
	srand(time(0));

	int randomIndex = rand() % options->size();

	string randomString = options[randomIndex];

	cout << randomString;
}