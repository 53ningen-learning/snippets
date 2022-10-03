#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        return solve3(nums, target);
    }

private:
    // O(n^2)
    vector<int> solve1(vector<int> &nums, int target)
    {
        int size = nums.size();
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }

    // O(n)
    vector<int> solve2(vector<int> &nums, int target)
    {
        map<int, int> m;
        for (int i = 0; i < (int)nums.size(); i++)
        {
            auto itr = m.find(nums[i]);
            if (itr != m.end())
            {
                return {itr->second, i};
            }
            else
            {
                m[target - nums[i]] = i;
            }
        }
        return {};
    }

    // O(n)
    vector<int> solve3(vector<int> &nums, int target)
    {
        map<int, int> m;
        for (int i = 0; i < (int)nums.size(); i++)
        {
            auto itr = m.find(target - nums[i]);
            if (itr != m.end())
            {
                return {itr->second, i};
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return {};
    }
};

int main()
{
    auto s = new Solution();

    vector<int> nums1{2, 7, 11, 15};
    int target1 = 9;
    auto res1 = s->twoSum(nums1, target1);
    cout << res1[0] << endl;
    cout << res1[1] << endl;

    vector<int> nums2{3, 2, 4};
    int target2 = 6;
    auto res = s->twoSum(nums2, target2);
    cout << res[0] << endl;
    cout << res[1] << endl;

    return 0;
}
