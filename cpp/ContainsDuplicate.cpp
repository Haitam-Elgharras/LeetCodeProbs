#include <vector>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        // adding a map
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            // compare each element with the existing elements in the map if it is already there return 1
            if (map.find(nums[i]) == map.end())
            {
                map[nums[i]] = 1;
            }
            else
            {
                return 1;
            }
        }
        return 0;
    }
};