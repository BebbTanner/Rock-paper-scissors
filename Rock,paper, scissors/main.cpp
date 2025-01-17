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
	string playerChoice;
	string options[3] = { "rock", "papper", "scissors" };

	//This is the command that is setting the seeding to 0.
	srand(time(0));
	//This is using the rand function to create a random index number from the size of the string array.
	int randomIndex = rand() % options->size();


	//This will select a string from the list of opitions using the randomly generated index.
	string CPUChoice = options[randomIndex];

	//Something is happening, sometimes the cpuchoice prints nothing and I am not sure as to why.
	cout << CPUChoice << endl;

	//This is asking the user for their choice.
	cout << "Please choose one of the following: Rock, Papper, Scissors" << endl;
	cin >> playerChoice;
	cout << endl;

	//I have no idea what the hell is happening with this code so far.


}