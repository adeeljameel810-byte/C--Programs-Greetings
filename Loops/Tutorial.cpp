#include <iostream>

using namespace std;

int main()
{
    /*
        Loops in C++

        There are three types of loops in C++:
        1. for loop
        2. while loop
        3. do-while loop
    */

    // --------------------------------------------------
    // 1. FOR LOOP
    // --------------------------------------------------

    /*
        Syntax:

        for (initialization; condition; update)
        {
            // loop body
        }
    */

    // Example: Print numbers from 1 to 40
    cout << "For Loop:" << endl;

    for (int i = 1; i <= 40; i++)
    {
        cout << i << endl;
    }


    // --------------------------------------------------
    // 2. WHILE LOOP
    // --------------------------------------------------

    /*
        Syntax:

        while (condition)
        {
            // loop body
        }
    */

    // Example: Print numbers from 1 to 40
    cout << "\nWhile Loop:" << endl;

    int i = 1;

    while (i <= 40)
    {
        cout << i << endl;
        i++;
    }


    // --------------------------------------------------
    // 3. DO-WHILE LOOP
    // --------------------------------------------------

    /*
        Syntax:

        do
        {
            // loop body
        }
        while (condition);
    */

    // Example: Print numbers from 1 to 40
    cout << "\nDo-While Loop:" << endl;

    i = 1;

    do
    {
        cout << i << endl;
        i++;
    }
    while (i <= 40);


    return 0;
}
