/*
Number Guessing Game

Develop a number guessing game where the
computer randomly selects a number, and the
player has to guess it. Provide hints like "too high"
or "too low" to help the player guess the correct
number. Also, display the number of attempts the
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess My Number Game\n\n";

    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        attempts++;


        if (guess-number > 10)
        {
            cout<<"\nThat's too high.\nTry Lower\n";
        }

        else if (guess-number < -10)
        {
            cout<<"\nThat's too low.\nTry higher\n";
        }
        
        else if (guess > number)
        {
            cout << "\nTry lower\n";
        }
        else if (guess < number)
        {
            cout << "\nTry higher\n";
        }
        else
        {
            cout << "\nCorrect! You got it in " << attempts << " attempts!\n";
        }
    } while (guess != number);

    return 0;
}