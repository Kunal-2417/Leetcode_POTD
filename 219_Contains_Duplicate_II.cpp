#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) != mp.end())
            if (i - mp[nums[i]] <= k)
            return true;
            mp[nums[i]] = i;
            }
            return false;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 1};
    int k=3;
    bool ans = s.containsNearbyDuplicate(nums, k);
    cout<<ans<<endl;


     
return 0;
}