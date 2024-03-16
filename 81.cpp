#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int l = 0;
        int h = nums.size() - 1;
        int mid;
        sort(nums.begin(), nums.end());
        while (h - l > 1)
        {
            mid = (l + h) / 2;
            if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {

                h = mid;
            }
        }
        if (nums[l] == target || nums[h] == target)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << s.search(nums, 0);   
return 0;
}