// Annie Zhao
// October 1, 2024
// Homework 2, Part 2

#include <iostream>
using namespace std;

main()
{
    // Variables
    float j1;
    float j2;
    float j3;
    float j4;
    float j5;
    float j6;
    double score;  // final score
    double total;

    // Ask for input
    cout << "What are the 6 scores given? (Separate each score with a space.) :";
    cin >> j1 >> j2 >> j3 >> j4 >> j5 >> j6;

    // Calculating the total

    total = j1 + j2 + j3 + j4 + j5 + j6;

    // Removing the highest number
    if (j1 > j2 && j3 && j4 && j5 && j6)
        total - j1;
    else if (j2 > j1 && j3 && j4 && j5 && j6)
        total - j2;
    else if (j3 > j2 && j1 && j4 && j5 && j6)
        total - j3;
    else if (j4 > j2 && j3 && j1 && j5 && j6)
        total - j4;
    else if (j5 > j2 && j3 && j4 && j1 && j6)
        total - j5;
    else if (j6 > j2 && j3 && j4 && j5 && j1)
        total - j6;

    // Removing the lowest number
    if (j1 < j2 && j3 && j4 && j5 && j6)
        total - j1;
    else if (j2 < j1 && j3 && j4 && j5 && j6)
        total - j2;
    else if (j3 < j2 && j1 && j4 && j5 && j6)
        total - j3;
    else if (j4 < j2 && j3 && j1 && j5 && j6)
        total - j4;
    else if (j5 < j2 && j3 && j4 && j1 && j6)
        total - j5;
    else if (j6 < j2 && j3 && j4 && j5 && j1)
        total - j6;

    cout << j1 << j2 << j3 << j4 << j5 << j6 << total;
}