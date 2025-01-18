/*
Rock paper scissors game.

rock > scissors
scissors > paper
paper > rock

Input:
	User makes a selection X
	CPU player makes a selection X

output:
	Whoever won the game is displayed
*/

#include <iostream>
#include <ctime> //time based seeding
#include <cstdlib> //rand and srand
using namespace std;

int main() {
	//Setting the randomized seeding to zero.
	srand(time(0));

	//Declared variables.
	string myArray[3] = { "Rock", "Paper", "Scissors" };
	int playerChoice, randomNum = rand() % 3;

/*Start of the player choice options*/
	cout << "Please make a selection:" << endl;
	cout << "0 - Rock" << endl;
	cout << "1 - Paper" << endl;
	cout << "2 - Scissors" << endl;
	cin >> playerChoice;
	cout << endl;

	cout << myArray[playerChoice] << endl;
/*End of the player choice options*/


/*Start the Cpu options*/
	cout << endl;

	cout << myArray[randomNum] << endl;
/*End the Cpu options.*/


/*  Now I need to do the setup for the comparison of the options.

	0 - rock > 2 - scissors
	2 - scissors > 1 - paper
	1- paper > 0 -rock

*/
	if () {

	}
	
}