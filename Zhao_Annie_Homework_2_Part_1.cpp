// Annie Zhao
// October 1, 2024
// Homework 2, Part 1

#include <iostream>
using namespace std;

main () 
{
    // Variables
    int month;
    int day;

    // ask for input
    cout << "What is the month? (as an integer) : ";
    cin >> month;
    cout << "What is the day of the month? : ";
    cin >> day;

    // Calculations
    if (month == 3 && day >=21 || month == 6 && day <= 20 || month >3 && month <6)
        cout << "It is now Spring!" << endl;

    else if (month == 6 && day >= 21 || month == 9 && day <=20 || month >6 && month <9)
        cout << "It is now Summer!" << endl;
    
    else if (month == 9 && day >=23 || month == 12 && day <=21 || month >9 && month <12)
        cout << "It is now Fall!" << endl;

    else 
        cout << "It is now Winter!" << endl;
    return 0;
}

// output message
/*
What is the month? (as an integer) : 8
What is the day of the month? : 25
It is now Summer!
*/