#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
int main()
{

    vector<int> nums = {-2, -3, -1, 0};
    int max = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        currentSum += nums[i];
        max = currentSum > max ? currentSum : max;
        currentSum = currentSum < 0 ? 0 : currentSum; // if currentSum is negative, it's not a favorable subarray
    }
    cout << max;
    return 0;
}