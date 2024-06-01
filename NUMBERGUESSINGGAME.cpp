#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(0));
    
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a random number between 1 and 100. Try to guess it!\n\n";

    while (true) {
       
        cout << "Enter your guess: ";
        cin >> guess;

       
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number.\n";
            continue;
        }

   
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly!\n";
            cout << "It took you " << attempts << " attempts.\n";
            break;
        } else {
            int difference = abs(secretNumber - guess);
            if (difference > 20) {
                cout << "You're way off!\n";
            } else if (difference > 10) {
                cout << "You're getting colder.\n";
            } else if (difference > 5) {
                cout << "You're getting warmer.\n";
            } else {
                cout << "You're very close!\n";
            }
        }
    }

    return 0;
}


