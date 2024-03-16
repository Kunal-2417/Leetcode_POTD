#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    
     int minDifference(vector<int> &nums)
    {
    sort(nums.begin(), nums.end());
    if (nums.size() <= 4)
    {
        return 0;
       }
       int n = nums.size();
       int ans = INT_MAX;
       ans = min(ans, abs(nums[3] - nums[n - 1]));
       ans = min(ans, abs(nums[2] - nums[n - 2]));
       ans = min(ans, abs(nums[1] - nums[n - 3]));
       ans = min(ans, abs(nums[0] - nums[n - 4]));

       return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 5, 0, 10, 14};
    cout << s.minDifference(nums); 
return 0;
}