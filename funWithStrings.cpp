/*
sD 8/26/24
funWithStrings.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "\nWelcome to my String Program!\n";

    // Create a string object
    string myStringObject;

    // Assign a value to our new string object
    myStringObject = "This is an abcdefg string";

    // Output our string
    cout << "\n" << myStringObject << "\n\n";

    // Get the size of my string
    cout << "The size of '" << myStringObject << "' is: " << myStringObject.size() << "\n\n";

    // Output the chars at subscripts (or position numbers) 2 and 14
    // Create two char variables
    char myChar01;
    char myChar02;

    // Assigning subscripts to char variables
    myChar01 = myStringObject[2];
    myChar02 = myStringObject[14];

    // Output the chars we extracted from our string object
    cout << "Character at position 2 is: '" << myChar01 << "'.\n\n";
    cout << "myStringObject[14] is: '" << myStringObject[14] << "'.\n\n";

    // Use the at() function to get the char at subscript 16
    cout << "Character at subscript 16 is: '" << myStringObject.at(16) << "'.\n";

    char anotherChar;
    anotherChar = myStringObject.at(16);
    cout << "\nanotherChat is: " << anotherChar << "\n";

    // Concatenate two strings and output the result of the concatenation
    string anotherString = "xyz";
    string twoStrings = "";

    twoStrings = anotherString + myStringObject;

    cout << "\ntwoStrings is: " << twoStrings << "\n\n";

    // Substring is very important and useful
    string mySubstring = "";
    mySubstring = myStringObject.substr(5, 2);

    cout << "mySubstring is: '" << mySubstring << "'\n\n";

    return 0;
}