/*
Number Guessing Game

Develop a number guessing game where the
computer randomly selects a number, and the
player has to guess it. Provide hints like "too high"
or "too low" to help the player guess the correct
number. Also, display the number of attempts the player took to guess the number.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int number, guess, attempts = 0;
    std::srand(std::time(0));
    number = std::rand() % 1000 + 1;

    std::cout << "Guess My Number Game\n\n";

    do
    {
        std::cout << "Enter a guess between 1 and 1000: ";
        std::cin >> guess;
        attempts++;

        int difference = guess - number;

        if (difference > 500)
        {
            std::cout << "\nThat's way too high.\nTry much lower\n";
        }
        else if (difference < -500)
        {
            std::cout << "\nThat's way too low.\nTry much higher\n";
        }
        else if (difference > 100)
        {
            std::cout << "\nThat's too high.\nTry lower\n";
        }
        else if (difference < -100)
        {
            std::cout << "\nThat's too low.\nTry higher\n";
        }
        else if (difference > 10)
        {
            std::cout << "\nThat's a bit high.\nTry slightly lower\n";
        }
        else if (difference < -10)
        {
            std::cout << "\nThat's a bit low.\nTry slightly higher\n";
        }
        else if (difference > 0)
        {
            std::cout << "\nTry lower\n";
        }
        else if (difference < 0)
        {
            std::cout << "\nTry higher\n";
        }
        else
        {
            std::cout << "\nCorrect! You got it in " << attempts << " attempts!\n";
        }
    } while (guess != number);

    return 0;
}