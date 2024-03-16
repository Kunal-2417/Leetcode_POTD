#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int h = nums.size() - 1;

        while (l <= h)
        {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[l] <= nums[mid])
            {
                if (nums[l] <= target && target < nums[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            else
            {
                if (nums[mid] < target && target <= nums[h])
                    l = mid + 1;
                else
                    h = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << s.search(nums, target);

    return 0;
}
