#include <iostream>

// Declare variables
int a, b;

// Take user input
cout << "Enter the first number:";
cin >> a;

cout << "Enter the second number:";
cin >> b;

// Display the original values
cout << "a: " << a << ", b: " << b << endl;

// Swap the values
const int temp = a;
a = b;
b = temp;

// Display the swapped values
cout << "a: " << a << ", b: " << b << endl;