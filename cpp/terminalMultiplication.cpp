#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

float p(int a, int b, int res = 1)
{
    if (b == 0)
        return res;

    return p(a, b - 1, res * a);
}

int main()
{

    cout << p(5, 3) << endl;

    return 0;
}
