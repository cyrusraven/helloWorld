/*
 * File:   main.cpp
 * Author: Daniel Silva
 *
 * Created on August 27, 2013, 9:52 AM
 */

/*
 * Um array que recebe os valores do usuário e depois os lista
 */

#include <iostream>

using namespace std;

int main() {
    int array[8];

    for (int x = 0; x < 8; x++) {
        cout << "valor "<< x <<"> ";
        cin >> array[x];
    }
    cout << "\n";
    cout << "resultados:";
    for (int x = 0; x < 8; x++)
        cout << "valor "<< x <<"> "<<array[x]<<"\n";

    return 0;
}