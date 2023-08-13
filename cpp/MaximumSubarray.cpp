#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
int main()
{

    vector<int> nums = {-2, -3, -1, 0};
    long max = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        long sum = nums[i];

        max = sum > max ? sum : max;

        if (i == nums.size() - 1)
            continue;

        for (int j = i + 1; j < nums.size(); j++)
        {
            sum += nums[j];

            if (sum > max)
                max = sum;
        }
    }
    cout << max;
    return 0;
}