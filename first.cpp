#include <iostream>
using namespace std;

int globalVar = 8;
int x = 9;
int a = 2;

void sum()
{
    cout << "The sum of x and a is " << a + x; // 2+9 = 11
    // When this func will be called in main, first it will check is there any var named as a and x in itself, if not then it'll check any global var named as a and x. It'll not use x var in main func.
}

int main()
{
    // Variable Types
    float pi = 3.14;
    double b = 6.90934;
    char c = 'x';
    bool isTrue = pi > b;

    // Variable scope --> Local (inside block) and Global (outside block)
    int localVar = 7;

    // As int x = 5 is local and int x = 9 is global variable, if we call x here, it'll call local variable as local variable is prioritized over global.
    int x = 5;
    /* x = 25; Here we are updating existing variable still the local var will be prioritized*/

    cout << x << endl;      // Will print 5 as said above
    cout << isTrue << endl; // 0 means false, 1 means true
    sum();

    return 0;
}
