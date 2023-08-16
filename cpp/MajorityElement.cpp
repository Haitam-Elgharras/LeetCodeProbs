#include <vector>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int max = nums.size() / 2;
        for (int num : nums)
            map[num]++;

        for (auto e : map)
            if (e.second > max)
                return e.first;

        return max;
    }
};
