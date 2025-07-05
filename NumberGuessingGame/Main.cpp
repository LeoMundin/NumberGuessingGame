#include <iostream>
#include <random>

using namespace std;


//TODO: 
//  - Add variable "Higher, lower" depending on how far off the guess is.
//  - Implement error checking
//  - Implement constructor for cleaner instatntiation.
//  - Create header and .cpp files
//  - Clean and comment code


class NumberGuessingGame
{
public:

    int numberOfAttempts = 5;
    int maxNumberRange;
    int targetNumber;

    void BeginGame() 
    {
        cout << "Give me a whole number... ";

        cin >> maxNumberRange;

        targetNumber = rand() % maxNumberRange + 1;

        cout << "I'm thingking of a number between 0 - " << maxNumberRange << ", What is the number? \n";

        // Repeats question cycle equal to the number of availavle attempts
        for (int i = 0; i < numberOfAttempts; i++)
        {

            ProcessGuess(i);

        }

        TeminateGame();

    }

private:

    void ProcessGuess(int attemptIndex)
    {

        int currentGuess;

        cin >> currentGuess;

        if (currentGuess == targetNumber)
        {

            cout << "Well done! you guessed the number " << targetNumber << " with " << numberOfAttempts - attemptIndex << " attempts left.";


        }
        else if (currentGuess < targetNumber)
        {

            cout << "That guess is a little low, try again \n";

        }
        else if (currentGuess > targetNumber)
        {

            cout << "That guess is a little High, try again \n";

        }
        
    }

    void TeminateGame() 
    {
        cout << "You ran out of attempts! the number was : " << targetNumber;
    }

};


int main()
{

    NumberGuessingGame numberGuessingGame;

    numberGuessingGame.BeginGame();






}
