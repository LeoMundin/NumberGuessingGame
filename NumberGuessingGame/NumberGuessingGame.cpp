#include "NumberGuessingGame.h"

// Constructor starts game.
NumberGuessingGame :: NumberGuessingGame() {

    BeginGame();

}

// Prompts the player to start the game by taking in a max value, then selects a random number in that range and starts the game loop.
void NumberGuessingGame :: BeginGame() 
{


    cout << "Give me a whole number... ";

    cin >> maxNumberRange;

    // error checking input for a valid number
    while (!cin.good())
    {

        // Ingores any error and clears the input stream for another attempt
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "That was not a valid number. Please try another...";
        cin >> maxNumberRange;

    }


    targetNumber = rand() % maxNumberRange + 1;

    cout << "I'm thingking of a number between 0 - " << maxNumberRange << ", What is the number? \n";

    // Repeats question cycle equal to the number of availavle attempts
    for (int attemptIndex = 0; attemptIndex < numberOfAttempts; attemptIndex++)
    {

        ProcessGuess(attemptIndex);

    }

    TeminateGame();

}

// For a given attempt, takes in a guess from the player and calculates whether the guess was higher,lower or equal to the target number, outputting the result
void NumberGuessingGame::ProcessGuess(int attemptIndex) {

    int currentGuess;

    cin >> currentGuess;

    // error checking input for a valid guess
    while (!cin.good())
    {

        // Ingores any error and clears the input stream for another attempt
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "That was not a valid guess. Please try another...";
        cin >> maxNumberRange;

    }

    // Guess equal
    if (currentGuess == targetNumber)
    {

        cout << "Well done! you guessed the number " << targetNumber << " with " << numberOfAttempts - attemptIndex << " attempts left.";

        RestartGame();

    }
    // Guess too low
    else if (currentGuess < targetNumber)
    {

        cout << "That guess is a little low, try again \n";

    }
    // Guess too high
    else if (currentGuess > targetNumber)
    {

        cout << "That guess is a little High, try again \n";

    }

}

// Prompts the temination of the game, and the begining of a new one;
void NumberGuessingGame::TeminateGame()
{
    cout << "You ran out of attempts! the number was : " << targetNumber;

    RestartGame();

}

// Prompts the player to start again, BeginGame() if restart is selected.
void NumberGuessingGame :: RestartGame() {

    string playAgainFlag;

    cout << "\nPlay Again? Y/N \n";
    cin >> playAgainFlag;
    if (playAgainFlag == "y" || "Y" || "Yes" || "YES" || "yes") {
        BeginGame();
    }

}