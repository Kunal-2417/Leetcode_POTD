#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (mid % 2 == 1)
            {
                mid--;
            }
            if (nums[mid] == nums[mid + 1])
            {
                low = mid + 2;
            }
            else
            {
                high = mid;
            }
        }
        return nums[low];
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << s.singleNonDuplicate(nums) << endl;
return 0;
}