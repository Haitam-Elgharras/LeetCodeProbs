#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int max = nums.size() / 3;
        vector<int> majorElements;
        for (int num : nums)
            map[num]++;

        for (auto e : map)
        {
            if (e.second > max)
                majorElements.push_back(e.first);
        }

        return majorElements;
    }
};