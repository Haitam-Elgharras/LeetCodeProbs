
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int getSum(int a, int b)
    {
        float num = a - b;
        if (num == 1)
        {
            return a * 2 - 1;
        }
        if (num == -1)
        {
            return b * 2 - 1;
        }
        float current = 0;
        if (num > 0)
        {
            num = num / 2;
            current = a - num;

            return (int)(current * 2);
        }
        else
        {
            num = -num / 2;
            cout << num << endl;
            current = b - num;

            return (int)(current * 2);
        }
    }
};

int main()
{
    Solution s;
    cout << s.getSum(0, 17) << endl;
    return 0;
}