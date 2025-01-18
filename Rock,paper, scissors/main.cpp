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

There is an issue were it will only print the output once if you run it in the same terminal.
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
/*End of the player choice options*/

/*Start player win conditions*/

	//Player chooses rock and cpu chooses scissors
	if (playerChoice == 0 && randomNum == 2 ) {
		cout << myArray[playerChoice] << endl;
		cout << myArray[randomNum] << endl;

		cout << "Player wins!" << endl;
	}

	//player chooses scissors and cpu chooses paper
	else if (playerChoice == 2 && randomNum == 1) {
		cout << myArray[playerChoice] << endl;
		cout << myArray[randomNum] << endl;

		cout << "Player wins!" << endl;
	}

	//player chooses paper and cpu chooses rock
	else if (playerChoice == 1 && randomNum == 0) {
		cout << myArray[playerChoice] << endl;
		cout << myArray[randomNum] << endl;

		cout << "Player wins!" << endl;
	}

/*End player win conditions*/

/*Start player win conditions*/

	//Cpu chooses rock and player chooses scissors
	if (randomNum == 0 && playerChoice == 2) {
		cout << myArray[playerChoice] << endl;
		cout << myArray[randomNum] << endl;

		cout << "Computer wins!" << endl;
	}

	//Cpu chooses scissors and player chooses paper
	else if (randomNum == 2 && playerChoice == 1) {
		cout << myArray[playerChoice] << endl;
		cout << myArray[randomNum] << endl;

		cout << "Computer wins!" << endl;
	}

	//Cpu chooses papper and player chooses rock
	else if (randomNum == 1 && playerChoice == 0) {
		cout << myArray[playerChoice] << endl;
		cout << myArray[randomNum] << endl;

		cout << "Computer wins!" << endl;
	}

/*End player win conditions*/
}