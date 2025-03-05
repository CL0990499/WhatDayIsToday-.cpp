#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string variable to store the user's input
    string day;

    // Prompt the user to enter a day of the week
    cout << "Enter a day of the week: ";
    getline(cin, day);  // Use getline to handle multi-word inputs

    // Convert the string to lowercase manually by iterating over each character
    for (char& c : day) {
        c = tolower(c);  // Convert each character to lowercase
    }

    // Use a switch statement by mapping days to integers
    int dayNum = 0;  // Default to a weekday (not weekend)

    // Map the day of the week to an integer
    if (day == "monday") dayNum = 1;
    else if (day == "tuesday") dayNum = 2;
    else if (day == "wednesday") dayNum = 3;
    else if (day == "thursday") dayNum = 4;
    else if (day == "friday") dayNum = 5;
    else if (day == "saturday") dayNum = 6;
    else if (day == "sunday") dayNum = 7;

    // Switch statement to print the correct message based on the day
    switch (dayNum) {
    case 6:  // Saturday
    case 7:  // Sunday
        cout << "It's the weekend!" << endl;
        break;
    case 3:  // Wednesday
        cout << "Hump Daaaaay" << endl;
        break;
    case 5:  // Friday
        cout << "TGIF!" << endl;
        break;
    default:
        cout << "It's a weekday!" << endl;
        break;
    }

    return 0;
}