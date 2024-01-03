// Rock paper scissor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>  
#include <vector>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
    string userChoice;
    char repeat = 'Y';
    
    //A vector to store the possible outcomes
    vector<string> choices = { "Rock", "Paper", "Scissors" };


    
   
    while (repeat == 'y' || repeat == 'Y') {
        srand(static_cast<unsigned int>(time(0)));

        int randomIndex = rand() % choices.size();

        string computerChoice = choices[randomIndex];

        //user input
        cout << "Please enter your choice rock paper or scissors: ";
        cin >> userChoice;
        userChoice[0] = toupper(userChoice[0]);
        //Logic
        if (userChoice == computerChoice) {
            cout << "Its a tie!";
        }
        else if (userChoice == "Paper" && computerChoice == "Scissors") {
            cout << "you lost!, computer choice is Scissors.";
        }
        else if (userChoice == "Rock" && computerChoice == "Paper") {
            cout << "you lost!, computer choice is Paper.";
        }
        else if (userChoice == "Scissors" && computerChoice == "Rock") {
            cout << "you lost!, computer choice is Rock.";

        }
     

        else {
            cout << "you won!\n" << "your choice: " << userChoice << "\n" << "Computer's choice: " << computerChoice;

        }
        cout << "\nrepeat?";
        cin >> repeat;
        if (repeat == 'y' || repeat == 'Y')
            continue;
        else
            break;
//end of while loop
    }
    cout << "bye!";


        return 0;
}

//modify
//modify2
