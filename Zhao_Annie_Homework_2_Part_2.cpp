// Annie Zhao
// October 1, 2024
// Homework 2, Part 2

#include <iostream>
using namespace std;

main()
{
    // Variables
    double j1;
    double j2;
    double j3;
    double j4;
    double j5;
    double j6;
    double smallest = 10;
    double largest = 0;
    double total;
    double average;  // final score average

    // Ask for input
    cout << "What are the 6 scores given? (Seperate each score with a space.) : ";
    cin >> j1 >> j2 >> j3 >> j4 >> j5 >> j6;

    // Removing the largest number
    if (j1 >= largest)
        largest = j1;
    if (j2 >= largest)
        largest = j2;
    if (j3 >= largest)
        largest = j3;
    if (j3 >= largest)
        largest = j3;
	if (j4 >= largest)
        largest = j4;
	if (j5 >= largest)
        largest = j5;
	if (j6 >= largest)
        largest = j6;

    // Removing the smallest number
	if (j1 <= smallest)
		smallest = j1;
	if (j2 <= smallest)
		smallest = j2;
	if (j3 <= smallest)
		smallest = j3;
	if (j4 <= smallest)
		smallest = j4;
	if (j5 <= smallest)
		smallest = j5;
	if (j6 <= smallest)
		smallest = j6;

	// Calculating the total
	total = j1 + j2 + j3 + j4 + j5 + j6 - largest - smallest;

	// Calculating the average
	average = total/4;

	// Output
	
	cout << "Final Score : " << average << endl;

	return 0;
}

// Output Message
/*
What are the 6 scores given? (Separate each score with a space.) : 1 2 3 4 5 6
Final Score: 3.5
*/