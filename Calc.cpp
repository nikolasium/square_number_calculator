// Author Nikolas Beier

#include <iostream>
#include <iomanip>
#include "Calc.h"

using namespace std;

int user_query()
{
    int selection;
    int user_input;
    int user_input_start;
    int user_input_end;
    do{
    cout << "Do you want to calculate a number (enter '1') or a range of squared numbers (enter '2') (enter '3' for exit)?\n";
    cin >> selection;
    while (cin.fail())
    {
        cout << "Err: Please enter a number!\n";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> selection;
    }
    if (selection == 1)
    {
        cout << "Enter number for calculation:\n";
        cin >> user_input;
        while (cin.fail())
        {
            cout << "Err: Please enter a number!\n";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> user_input;
        }
        cout << "Result: " << calculation(user_input) << endl;
    }
    else if (selection == 2)
    {
        cout << "Enter first number of your desired range:\n";
        cin >> user_input_start;
        while (cin.fail())
        {
            cout << "Err: Please enter a number!\n";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> user_input_start;
        }
        cout << "Enter secound number of your desired range:\n";
        cin >> user_input_end;
        while (cin.fail())
        {
            cout << "Err: Please enter a number!\n";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> user_input_end;
        }
        cout << "\n";
        cout << setw(5) << "Number" << setw(12) << "Sq-Number" << endl;
        cout << "------------------" << endl;

        for (int i = user_input_start; i <= user_input_end; ++i)
        {
            cout << setw(5) << i << setw(12) << calculation(i) << endl;
        }
        cout << "------------------" << endl;
    }
    else if (selection == 3)
    {
        exit(EXIT_SUCCESS);
    }
    else
    {
        cout << "Wrong selection. Please select 1,2 or 3!\n";
    }
    } while (selection != 1 && selection != 2);
}

int calculation(int n)
{ 
    int r = n * n; // squared is n² and n² = n × n

    if (r != n * n) 
    {
        throw runtime_error("Wrong calculated!");
    }

    return r;
}