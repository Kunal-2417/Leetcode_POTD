#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    cout << s.searchInsert(nums, target) << endl;
     
return 0;
}