#include <vector>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (int num : nums)
        {
            // compare each element with the existing elements in the map if it is already there return 1
            if (map.find(num) != map.end())
                return 1;
            map[num] = 1;
        }
        return 0;
    }
};
