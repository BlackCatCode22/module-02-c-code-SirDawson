/*
sD 9/9/24
forAndWhileLoop.cpp
*/

#include <iostream>

using namespace std;

int sumArange(int, int);

int main()
{
    cout << "\nMy revised range function that will now work!" << "\n";
    
    // Invoke the function 'sumArange'.
    int aPlaceForMyReturnValue = 0;
    aPlaceForMyReturnValue = sumArange(3, 6);

    // Let's take a look at the return value.
    cout << "The return value is: " << aPlaceForMyReturnValue << "\n";

    return 0;
}

// function def.

int sumArange(int startRange, int endRange)
{
    int theSumOfTheRange = 0;

    for (int i = startRange; i <= endRange; i++)
    {
        cout << "\nInside 'sumARange' and 'theSumOfTheRange' = " << theSumOfTheRange << "\n";
        theSumOfTheRange = theSumOfTheRange + i;
    }

    return theSumOfTheRange;
}