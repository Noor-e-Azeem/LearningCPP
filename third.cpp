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
    cout << "Here we want value of global c, while the priority is given to local c, so here we use scope resolution operator :: to access global c in block: " << ::c << endl;

    // ******************************************************************************* //

    // Literals --> Assigning type of var by putting f or F and l or L is important for writing programs as they have different size of memories

    float x = 3.14f;
    long double y = 3.14l;

    cout << sizeof(3.14) << endl;
    cout << sizeof(3.14f) << endl;
    cout << sizeof(3.14F) << endl;
    cout << sizeof(3.14l) << endl;
    cout << sizeof(3.14L) << endl;

    // ***********************Reference Variables************************** //

    // Single variable, different names, just referencing

    int p = 43;
    int &q = p;
    cout << p << endl;
    cout << q << endl;

    // ***********************Typecasting************************** //

    // Its simply, changing variable type

    float r = 45.46;

    cout << "The value of b is " << (int)r << endl;
    cout << "The value of b is " << int(r) << endl;
    int c = int(r);

    return 0;
}
