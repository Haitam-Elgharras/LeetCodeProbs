#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

float f(float n, float a = 1)
{
    if (n == 0)
        return a;

    // terminal recursion is an important concept cause it can be optimized.
    return f(n - 1, a * n);

    // terminal way the calculation is done before the recursive call
    // int b = n - 1;
    // int c = a * n;
    // return f(b, c);

    // non-terminal way the calculation is done after the recursive call
    // int rec = n*f(n-1);
    // return rec;
}

int main()
{

    cout << f(0) << endl;

    return 0;
}