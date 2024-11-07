// Ch_6_GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> 
#include <iomanip> 

using namespace std;

void difficultySelect(int x);
bool invalidNum(int check);
bool numberChecker(int input, int rightnum); 

int main()
{
	int ahhhhhhhh;

	cout << "enter fid";
	cin >> ahhhhhhhh;
	difficultySelect(ahhhhhhhh);

	return 0;
}

void difficultySelect(int x)
{
	// Variable Declarations
	bool continueYN = false;
	bool inputError = false;
	bool correctGuess = false;
	bool guessedNum = false;
	int guessnum = 0;
	int guess;

	do
	{
		do
		{
			if (x == 1)
			{
				cout << "You have chosen the easy difficulty." << endl;
				int srand(time(0));             // These two lines of code generate a 
				int correct_num = rand() % 10; // Random number between 0 and 10 - Easy Mode 
				cout << endl; // <- Spacer

				cout << "Enter your guess: ";
				cin >> guess;
				correctGuess = numberChecker(guess, correct_num);

				if (correctGuess = false)
				{
					cout << "You have " << guess << "'s left." << endl;
					guessedNum = false;
				}
				else
				{
					cout << endl;
					guessedNum = true;
				}
			}
		} while (correctGuess == false);

	} while (continueYN == true);
	//	else if (x == 2)
	//	{
	//		cout << "You have chosen the medium difficulty." << endl;
	//		int srand(time(0));             // These two lines of code generate a 
	//		int correct_num = rand() % 50; // Random number between 0 and 10 - Medium Mode
	//		inputError = false;
	//	}
	//	else if (x == 3)
	//	{
	//		cout << "You have chosen the Hard difficulty." << endl;
	//		int srand(time(0));             // These two lines of code generate a 
	//		int correct_num = rand() % 100; // Random number between 0 and 10 - Hard Mode
	//		inputError = false;
	//	}
	//	else if (x == 4)
	//	{

	//	}
	//	else if (x == 5)
	//	{

	//	}
	//	else
	//	{
	//		cout << "how" << endl;  
	//		inputError = true;  
	//	}

	//} while (continueYN == true);

	//	int srand(time(0));             // These two lines of code generate a 
	//	int correct_num = rand() % 10; // Random number between 0 and 100

}

bool numberChecker(int input, int rightnum)
{
	if (input == rightnum)
	{
		cout << "You guess the right number. . . Congrats." << endl; // Correct num
		return true; 
	}
	else
	{
		cout << "You didn't get it :(. " << endl; // Wrong num
		return false;  
	}
}

bool invalidNum(int check)
{
		if (!cin)
		{
			cout << "This is not a number. Please try again." << endl;
			cin.clear();
			cin.ignore(100, '\n');
			return true;
		}
		else if (check > 5 || check < 1)
		{
			cout << "These numbers are not in the options. Reread them and please try again." << endl;
			cin.clear();
			cin.ignore(100, '\n');
			return true;
		}
		else
		{
			return false;
		}
}