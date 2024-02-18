#include <iostream>
using namespace std;

int c = 20; // Here, c as global variable

int main()
{
    int a, b;
    cout << "Enter value 1." << endl;
    cin >> a;
    cout << "Enter value 2.\n";
    cin >> b;

    int c = a + b; // Here, c as local variable

    cout << "The sum is of a and b is " << c << endl;
    cout << "Here we want value of global c, while the priority is given to local c, so here we use scope resolution operator :: to access global c in block: " << ::c;

    return 0;
}
