#pragma once

#include <iostream>
#include <random>

using namespace std;


//TODO: 
//  - Add variable "Higher, lower" depending on how far off the guess is.


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
    
    void TeminateGame();

    void RestartGame();
    

};

