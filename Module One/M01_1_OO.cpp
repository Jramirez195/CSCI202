/* Program Name: M01_1_OO.cpp
 * Author: Jose Ramirez
 * Date Last Updated: 3/19/2024
 * Summary: A program that has two structure for the user to fill in.
 */

#include <iostream>
using namespace std;

// Define structures
struct TwoInts {
    int num1;
    int num2;
};

struct ThreeInts {
    int num1;
    int num2;
    int num3;
};

int main() {
    // Declare variables
    TwoInts twoIntsStruct;
    ThreeInts threeIntsStruct;

    // Ask user for input for TwoInts structure
    cout << "Enter the first integer for the TwoInts structure: ";
    cin >> twoIntsStruct.num1;
    cout << "\nEnter the second integer for the TwoInts structure: ";
    cin >> twoIntsStruct.num2;

    // Ask user for input for ThreeInts structure
    cout << "\nEnter the first integer for the ThreeInts structure: ";
    cin >> threeIntsStruct.num1;
    cout << "\nEnter the second integer for the ThreeInts structure: ";
    cin >> threeIntsStruct.num2;
    cout << "\nEnter the third integer for the ThreeInts structure: ";
    cin >> threeIntsStruct.num3;

    // Print out the values
    cout << "\nValues in the TwoInts structure: " << endl;
    cout << "First integer: " << twoIntsStruct.num1 << endl;
    cout << "Second integer: " << twoIntsStruct.num2 << endl;

    cout << "\nValues in the ThreeInts structure: " << endl;
    cout << "First integer: " << threeIntsStruct.num1 << endl;
    cout << "Second integer: " << threeIntsStruct.num2 << endl;
    cout << "Third integer: " << threeIntsStruct.num3 << endl;

    return 0;
}
