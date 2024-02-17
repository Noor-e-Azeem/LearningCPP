#include <iostream> /* Header File Types --> 1. System Header File --> eg. #include<iostream> & 2. User Defined Header File --> eg. #include"this.h" */
using namespace std;

int main()
{
    int a = 12;
    int b = 10;

    // Arithmetic Operators
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a / b << endl;
    cout << a * b << endl;
    cout << a % b << endl;
    cout << a++ << endl; // Print value and then add --> will print 12 as it is then add 1 at backend which will become 13
    cout << a-- << endl; // Here a = 13 from above, print and then subtract 1 at the backend gives 12 at the backend
    cout << ++a << endl; // Here a = 12 from above, first add 1 then print = 13
    cout << --a << endl; // Here a = 13 from above, first subtract 1 then print = 12

    // Assignment Operator --> =
    char x = 'y';

    // Comparison Operators --> will give ans in bool (0 or 1)
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;

    // Logical Operators
    // Not operator ! --> reverses outcome
    // And operator && --> needs all conditions to satisfy
    // Or operator || --> only one true condition is enough

    cout << (!(a <= b)) << endl;            // 12<=10 means false(0) but due to !(not) it will give true(1)
    cout << ((a <= b) && (a == b)) << endl; // 12<=10 means false(0) & 12==10 is also false(0) so gives false(0)
    cout << ((a <= b) || (a > b)) << endl;  // 12<=10 means false(0) & 12==10 is also true(1) so gives true(1)

    return 0;
}

// Operators --> Arithmetic, Assignment, Comparison and Logical Operators
