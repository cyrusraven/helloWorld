/*
 * File:   main.cpp
 * Author: Daniel Amaral e Silva
 *
 * Created on August 30, 2013, 5:17 PM
 */

/*
 * The following program should function as a basic calculator;
 * it should ask the user to input what type of arithmetic operation
 * he would like, and then ask for the numbers on which the operation
 * should be performed. The calculator should then give
 * the output of the operation.
 *
 * http://www.cprogramming.com/complete/calc.html
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * funções algébricas
 */

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    return (float)x / y;
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int main() {
    char key = '0';
    int x, y;
    while (key != 'e') {
        cout << "What operation would you like to perform: add(+), subtract(-), divide(/), multiply(*), [e]xit?> ";
        cin >> key;

        switch (key) {
            case '+':
                cout << "x> ";
                cin >> x;
                cout << "y> ";
                cin >> y;
                cout << "result> ";
                cout << add(x, y)<<endl;
                break;

            case '-':
                cout << "x> ";
                cin >> x;
                cout << "y> ";
                cin >> y;
                cout << "result> ";
                cout << subtract(x, y)<<endl;
                break;

            case '*':
                cout << "x> ";
                cin >> x;
                cout << "y> ";
                cin >> y;
                cout << "result> ";
                cout << multiply(x, y)<<endl;
                break;

            case '/':
                cout << "x> ";
                cin >> x;
                cout << "y> ";
                cin >> y;
                cout << "result> ";
                cout << divide(x, y)<<endl;
                break;

            case 'e':
                cout << "exiting"<<endl;
                break;

            default:
                cout << "option unavailable"<<endl;
                break;

        }

    }

    return 0;
}

