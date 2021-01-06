/** Author Nikolas Beier

// Square_number_calculator.cpp : This file contains the "main" function.

**/

#include <iostream>
#include "Calc.h"

using namespace std;


int main()
{
    char selection_user;
    cout << "Hello and welcome to Square Number Calculator!\n\n";
    do {
        user_query();
        cout << "Continue? (Y/n)";
        cin >> selection_user;
    } while (selection_user != 'n' && selection_user != 'N');
    
    return 0;
}
