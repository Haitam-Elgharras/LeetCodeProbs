#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    // key: number, value: index
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (map.count(complement))
        {
            cout << map[complement] << " " << i << endl;
            // return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    // return {};
    return 0;
}
