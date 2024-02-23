#include <iostream>
using namespace std;

int main()
{
    /***********************  C++ Control Structures *************************/

    /********** 1) Sequence 2) Selection 3) Loop Control Structures **********/

    /*** Selection Control Structure ***/

    // If-Else Ladder

    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    if (age < 12 && age > 0)
    {
        cout << "You are kid.";
    }
    else if (age > 12 && age < 18)
    {
        cout << "You are teenager";
    }
    else if (age > 18)
    {
        cout << "You are an adult";
    }

    // Switch Case

    switch (age)
    {
    case 16:
        cout << "You are teenager." << endl;
        break;
    case 22:
        cout << "You are adult." << endl;
        break;
    case 50:
        cout << "You are old." << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    return 0;
}
