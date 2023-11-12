
#include <iostream>
#include <vector>

using namespace std;

// class Solution
// {
// public:
//     int getSum(int a, int b)
//     {
//         float num = a - b;

//         switch ((int)num)
//         {
//         case 1:
//             return a * 2 - 1;
//             break;
//         case -1:
//             return b * 2 - 1;
//             break;
//         default:
//             break;
//         }

//         float current = 0;
//         if (num > 0)
//         {
//             num = num / 2;
//             current = a - num;
//             return (int)(current * 2);
//         }

//         num = -num / 2;
//         current = b - num;

//         return (int)(current * 2);
//     }
// };

class Solution
{
public:
    int getSum(int a, int b)
    {
        int result = 0;

        int difference = (a > b) ? (a - b) : (b - a);

        switch (difference)
        {
        case 1:
            result = (a > b) ? (a * 2 - 1) : (b * 2 - 1);
            break;
        default:
            float num = (float)difference / 2;
            result = (a > b) ? (int)((a - num) * 2) : (int)((b - num) * 2);
            break;
        }

        return result;
    }
};

int main()
{
    Solution s;
    cout << s.getSum(0, 17) << endl;
    return 0;
}