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

    // ***********************Constant************************** //

    const int w = 40; // Now, we can't change its value

    // ***********************Manipulators************************** //

    // Manipulators --> Format and beautify code [ e.g. setw(), endl ]
    // The header file <iomanip> is used for using setw().
    // setw() has right aligned all the numbers (values). The value in bracket is width in terms of no.of characters.
    // E.g setw(4) actually means set width of 4 characters.

    int m = 4, n = 12, o = 137;                     
    cout<<setw(3)<<m<<endl;
    cout<<setw(3)<<n<<endl;
    cout<<setw(3)<<o<<endl;

    /* The Output will be:
       4
      12
     137 */

    // ***********************Operator Precedence************************** //

    // Operator Precedence has same concept as the BODMAS in Maths, but sequence isn't same as BODMAS. 
    // It is the sequence of which operator will be performed in sequence.
    // If there's, int c = a*b+c-45; and so.
    
    return 0;
}
