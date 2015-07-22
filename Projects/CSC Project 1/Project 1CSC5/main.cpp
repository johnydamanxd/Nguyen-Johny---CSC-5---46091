/* 
 * File:   main.cpp
 * Author: Johny Man Nguyen
 * Project: CSC Cafe Game
 * Created on July 18, 2015, 1:34 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void StartG();
const int MAX_TRIES = 5;
int letterFill(char, string, string&);

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: StartG();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type in 1 and Enter to Start Game"<<endl;
    
    cout<<"\nType in 2 and Enter 2 to Exit Game\n"<<endl;
}

//Choose game function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Start Game
void StartG(){
    srand(time(NULL));
	string name;
	char letter;
	int guesses = 0;
	string word;

	// Welcome the user
	cout << "\nWelcome to the CSC 5 Cafe! Guess what's on our menu today!" << endl;
	cout << "\nAt the CSC 5 Cafe, you will have to guess what's on our menu in order to be served!" <<endl;
        string customer;  
         cout<<"\nCustomer's First Name: ";
         cin>>customer;
        
        // Ask user for Easy, Average, Hard
	string level;
	cout << "\nChoose a LEVEL (Easy (1), Average (2), Hard (3)):" << endl;
        cout << "\nType in corresponding number for LEVEL of difficulty!"<<endl;
        cin >> level;

	// Compare level 
	if (level == "1")
	{
		//Put all the string inside the array here
		string easy[] = { "bread", "bacon", "fruit", "grits" };
		string word;

		int n = rand() % 4;
		word = easy[n];

		//Call the function here for guessing game
		//Initialize the secret word with the * character.
		string unknown(word.length(), '*');
		cout << "\n\nEach letter is represented by an asterisk.";
		cout << "\n\nYou have to type only one letter in one try.";
		cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the food item.";
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		// Loop until the guesses are used up
		while (guesses < MAX_TRIES)
		{
			cout << "\n\n" << unknown;
			cout << "\n\nGuess a letter: ";
			cin >> letter;
			// Fill secret word with letter if the guess is correct,
			// Otherwise increment the number of wrong guesses.
			if (letterFill(letter, word, unknown) == 0)
			{
				cout << endl << "Oops! That letter isn't in there!" << endl;
				guesses++;
			}
			else
			{
				cout << endl << "You found a letter! You're getting closer!" << endl;
			}
			// Tell user how many guesses has left.
			cout << "You have " << MAX_TRIES - guesses;
			cout << " guesses left." << endl;
			// Check if user guessed the word.
			if (word == unknown)
			{
				cout << word << endl;
				cout << "Yeah! You got it! (Press Enter to Play Again)";
				break;
			}
		}
		if (guesses == MAX_TRIES)
		{
			cout << "\nSorry, you lose...we refuse to serve you! (Press Enter to Play Again)" << endl;
			cout << "\nThe word was : " << word << endl;
		}
		cin.ignore();
		cin.get();
		
	}
	
        else if (level == "2")
	{
		//Put all the string inside the array here
		string average[] = { "roastedham", "fruitsalad", "turkeywrap" };

		int n = rand() % 3;
		word = average[n];

		//Call the function here for guessing game
		// Initialize the secret word with the * character.
		string unknown(word.length(), '*');
		cout << "\n\nEach letter is represented by an asterisk.";
		cout << "\n\nYou have to type only one letter in one try.";
		cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the food item.";
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		// Loop until the guesses are used up
		while (guesses < MAX_TRIES)
		{
			cout << "\n\n" << unknown;
			cout << "\n\nGuess a letter: ";
			cin >> letter;
			// Fill secret word with letter if the guess is correct,
			// Otherwise increment the number of wrong guesses.
			if (letterFill(letter, word, unknown) == 0)
			{
				cout << endl << "Oops! That letter isn't in there!" << endl;
				guesses++;
			}
			else
			{
				cout << endl << "You found a letter! You're getting closer!" << endl;
			}
			// Tell user how many guesses has left.
			cout << "You have " << MAX_TRIES - guesses;
			cout << " guesses left." << endl;
			// Check if user guessed the word.
			if (word == unknown)
			{
				cout << word << endl;
				cout << "Yeah! You got it! (Press Enter to Play Again)";
				break;
			}
		}
		if (guesses == MAX_TRIES)
		{
			cout << "\nSorry, you lose...we refuse to serve you! (Press Enter to Play Again)" << endl;
			cout << "\nThe word was : " << word << endl;
		}
		cin.ignore();
		cin.get();
		
	}

	else if (level == "3")
	{
		//Put all the string inside the array here
		string hard[] = { "chickenburger", "frenchcrepes", "grilledsteak" };

		int n = rand() % 3;
		word = hard[n];

		//Call the function here for guessing game
		//Initialize the secret word with the * character.
		string unknown(word.length(), '*');
		cout << "\n\nEach letter is represented by an asterisk.";
		cout << "\n\nYou have to type only one letter in one try.";
		cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the food item.";
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		// Loop until the guesses are used up
		while (guesses < MAX_TRIES)
		{
			cout << "\n\n" << unknown;
			cout << "\n\nGuess a letter: ";
			cin >> letter;
			// Fill secret word with letter if the guess is correct,
			// Otherwise increment the number of wrong guesses.
			if (letterFill(letter, word, unknown) == 0)
			{
				cout << endl << "Oops! That letter isn't in there!" << endl;
				guesses++;
			}
			else
			{
				cout << endl << "You found a letter! Isn't that exciting?" << endl;
			}
			// Tell user how many guesses has left.
			cout << "You have " << MAX_TRIES - guesses;
			cout << " guesses left." << endl;
			// Check if user guessed the word.
			if (word == unknown)
			{
				cout << word << endl;
				cout << "Yeah! You got it! (Press Enter to Play Again)"<<endl;
				break;
			}
		}
		if (guesses == MAX_TRIES)
		{
			cout << "\nSorry, you lose...we refuse to serve you! (Press Enter to Play Again)" << endl;
			cout << "\nThe word was : " << word << endl;
		}
		cin.ignore();
		cin.get();
		
	}
}

int letterFill(char guess, string secretword, string &guessword)
{
	int i;
	int matches = 0;
	int len = secretword.length();
	for (i = 0; i< len; i++)
	{
		if (guess == guessword[i])
			return 0;
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}
//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}