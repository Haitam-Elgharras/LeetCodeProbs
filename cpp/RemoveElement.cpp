#include <vector>

using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int valIndex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            // we must placed the nonVal element in the front of the array
            if (nums[i] != val)
            {
                nums[valIndex] = nums[i];
                valIndex++;
            }
        }
        return valIndex;
    }
};