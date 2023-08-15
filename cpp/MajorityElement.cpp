#include <vector>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int max = nums.size();
        for (int num : nums)
        {
            if (map.find(num) != map.end())
                map[num]++;
            else
                map[num] = 1;
            if (map[num] > max / 2)
            {
                return num;
            }
        }
        return max;
    }
};
