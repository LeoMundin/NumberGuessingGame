
#include <iostream>
#include <random>

using namespace std;

int main()
{

    int numberOfAttempts = 5;

    int maxNumberRange;

    cout << "Give me a whole number... ";
    cin >> maxNumberRange;

    int targetNumber = rand() % maxNumberRange + 1;

    cout << "I'm thingking of a number between 0 - " << maxNumberRange << ", What is the number? \n";


    for (int i = 0; i < numberOfAttempts; i++)
    {

        int currentGuess;
            
        cin >> currentGuess;

        if (currentGuess == targetNumber) 
        {

            cout << "Well done! you guessed the number " << targetNumber << " with " << numberOfAttempts - i << " attempts left.";
            return 1;

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

    cout << "You ran out of attempts! the number was : " << targetNumber;
    return 0;

}    
