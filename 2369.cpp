#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool validPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        if (sum % 2 != 0)
        {
            return false;
        }
        else
        {
            sum = sum / 2;
            bool dp[nums.size() + 1][sum + 1];
            for (int i = 0; i <= nums.size(); i++)
            {
                dp[i][0] = true;
            }
            for (int i = 1; i <= sum; i++)
            {
                dp[0][i] = false;
            }
            for (int i = 1; i <= nums.size(); i++)
            {
                for (int j = 1; j <= sum; j++)
                {
                    if (j < nums[i - 1])
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                    if (j >= nums[i - 1])
                    {
                        dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                    }
                }
            }
            return dp[nums.size()][sum];
        }
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    Solution s;
    cout << s.validPartition(nums);
     
return 0;
}