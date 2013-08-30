/*
 * File:   main.cpp
 * Author: Daniel Silva
 *
 * Created on August 27, 2013, 11:07 AM
 */

/*
 * The following program will act as a guessing game in which the user has eight
 * tries to guess a randomly generated number. The program will tell the user
 * each time whether he guessed high or low:
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

/*
 * not solved, still going into a infinite loop
 * puzzle:
 * http://www.cprogramming.com/complete/guessing.html
 */
int main() {
    int number = rand() % 100;
    int guess = -1;
    int trycount = 0;

    while (guess != number && trycount < 8) { // while precisa que ambos sejam falsos para quebrar o loop. interessante. ;D
        cout << "Please enter a guess> ";
        cin >> guess;

        if (guess < number) {
            cout << "Too low" << endl;
        } else if (guess > number) {
            cout << "Too high" << endl;
        } else if ( guess == number){
            cout <<" You guessed the number!";
            return 0;
        }
        trycount++;
    }

    cout << "Sorry, the number was > "<< number;

    return 0;
}

