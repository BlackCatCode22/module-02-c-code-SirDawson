/*
sD 8/28/24
functionPractice.cpp
*/

#include <iostream>

// Opted for 'using std::(...)' for frequently used objects/classes over 'using namespace std' as it's not best practice.
using std::cout;
using std::cin;
using std::string;

// Function declarations
int sumTwoWholeNumbers(int, int);
int squareAnumber(int);
string sayHelloToTheUser(string);
int largestOfThreeWholeNumbers(int, int, int);
string oddOrEven(int);

int main()
{
    // The variables for this program.
    int sumNum1 = 0;
    int sumNum2 = 0;
    int numToBeSquared = 0;
    string sayingHello = "hello";
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;
    int userInput = 0;
    string result;

    cout << "\nWelcome to my Functions Program!\n\n"
         << "Let's start with the 'sumTwoWholeNumbers()' function.\n\n";

    // Invoking the 'sumTwoWholeNumbers()' function.
    sumTwoWholeNumbers(sumNum1, sumNum2);

    cout << "Great! Looks like that went well.\n\n"
         << "************************************************\n\n"
         << "Now, onto the 'squareAnumber()' function.\n\n";

    // Invoking the 'squareAnumber()' function.
    squareAnumber(numToBeSquared);

    cout << "Sweet! Let's keep this going.\n\n"
         << "************************************************\n\n"
         << "Onto the 'sayHelloToUser()' function.\n\n";

    // Invoking the 'sayingHelloToTheUser()' function.
    sayHelloToTheUser(sayingHello);

    cout << "Three down. Two more to go!\n\n"
         << "************************************************\n\n"
         << "Let's start the 'largestOfThreeWholeNumbers()' function.\n";

    // Invoking the 'largestOfThreeWholeNumbers()' function.
    largestOfThreeWholeNumbers(firstNum, secondNum, thirdNum);

    cout << "Awesome! There's only one more left.\n\n"
         << "************************************************\n\n"
         << "Let's end with the 'oddOrEven()' function.\n";

    cout << "\nEnter your number: ";
    cin >> userInput;
    cout << "\n";

    // Invoking the 'oddOrEven()' function as the result.
    result = oddOrEven(userInput);

    cout << userInput << " is " << result << ".\n\n";

    return 0;
}

// Function definitions.
int sumTwoWholeNumbers(int sumNum1, int sumNum2)
{
    cout << "Enter your first number: ";
    cin >> sumNum1;
    cout << "\n";
    cout << "Enter your second number: ";
    cin >> sumNum2;
    cout << "\n";

    // Declaring 'sum'.
    int sum = sumNum1 + sumNum2;

    cout << "The sum of " << sumNum1 << " and " << sumNum2 << " is " << sum << ".\n\n";

    return sum;
}

int squareAnumber(int numToBeSquared)
{    
    cout << "Type in a number that you would like to be squared: ";
    cin >> numToBeSquared;
    cout << "\n";

    // Declaring 'numSquared'.
    int numSquared = numToBeSquared * numToBeSquared;

    cout << numToBeSquared << " squared is " << numSquared << ".\n\n";

    return numSquared;
}

string sayHelloToTheUser(string sayingHello)
{
    // Declaring 'name' and initializing it as empty.
    string name;

    cout << "You know, I never got a chance to properly greet you. What's your name?\n"
         << "Enter your name: ";
    cin >> name;
    cout << "\n";

    cout << "Well, " << sayingHello << ", " << name << ". It's nice to meet you! :)\n\n";

    return sayingHello;
}

int largestOfThreeWholeNumbers(int firstNum, int secondNum, int thirdNum)
{
    // Declaring 'largestNum'.
    int largestNum = firstNum;

    cout << "\nEnter the first number: ";
    cin >> firstNum;

    cout << "\nEnter the second number: ";
    cin >> secondNum;

    cout << "\nEnter the third number: ";
    cin >> thirdNum;
    cout << "\n";

    // Using two if statements as opposed to nested if-else statements for better code clarity.
    if(secondNum > largestNum)
    {
        largestNum = secondNum;
    }

    if(thirdNum > largestNum)
    {  
        largestNum = thirdNum;
    }

    cout << "The largest number out of those three is: " << largestNum << ".\n\n";

    return largestNum;
}

string oddOrEven(int userInput)
{   
    // Declaring 'myReturnStr' and initializing it as empty.
    string myReturnStr;
    
    // If-else statement to determine if 'userInput' is even or odd.
    if (userInput % 2 == 0)
    {
        // Ran if true. 'userInput' is even.
        myReturnStr = "even";
    }
    else 
    {
        // Ran if false. 'userInput' is odd.
        myReturnStr = "odd";
    }

    // Prints the result and uses the modulous operator to test if 'userInput' is even or odd.
    cout << "The remainder of 'userInput' (" << userInput << ") divided by 2 is " << userInput % 2 << ".\n\n";

    return myReturnStr;
}