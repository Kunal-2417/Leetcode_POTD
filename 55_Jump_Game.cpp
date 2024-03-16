#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int maxReach = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > maxReach)
                return false;
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;
    }
};
int main()
{
    vector<int> nums = {2, 0, 0};
    Solution ob;
    cout << ob.canJump(nums);
     
return 0;
}