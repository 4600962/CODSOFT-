#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int number = rand() % 100;
    int guess;
    int tries = 0;

    cout << "Guess the number from 1 till 100.\n";

    while (true) {
        cin >> guess;
        tries++;

        if (guess < 0) {
            cout << "Please enter a number between 1 and 100.\n";
        } else if (guess < number) {
            cout << "Too low.\n";
        } else if (guess > number) {
            cout << "Too high.\n";
        } else {
            cout << "Your guess is correct.\n";
            cout << "It took you " << tries << " tries to guess the number.\n";
            break;
        }
    }

    return 0;
}
