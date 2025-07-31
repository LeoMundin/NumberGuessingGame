#pragma once

#include <iostream>
#include <random>

using namespace std;


class NumberGuessingGame 
{

public:

    // Constructor.
    NumberGuessingGame();

    int numberOfAttempts = 5;
    int maxNumberRange;
    int targetNumber;


    void BeginGame();
    

private:
    
    void ProcessGuess(int attemptIndex);

    void EvaluateGuessError(int guessValue);
    
    void TeminateGame();

    void RestartGame();
    

};

