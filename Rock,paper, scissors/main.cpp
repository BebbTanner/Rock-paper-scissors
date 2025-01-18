/*
Rock paper scissors game.

rock > scissors
scissors > paper
paper > rock

Input:
	User makes a selection
	CPU player makes a selection

output:
	Whoever won the game is displayed
*/

#include <iostream>
#include <ctime> //time based seeding
#include <cstdlib> //rand and srand
using namespace std;

int main() {

	/*
	I need to figure out how to select items from a list randomly
	*/

	//Here is my test list
	string myArray[3] = { "Rock", "Paper", "Scissors" };

	//Setting the randomized seeding to zero.
	srand(time(0));

	//This generates a random number between 0 and 2.
	int randomNum = rand() % 3;

	//This will take the random number and use it as the index for the array and print the correct item associated with that indexed number.
	cout << myArray[randomNum] << endl;
}