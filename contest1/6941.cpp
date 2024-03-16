#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int count = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                count += nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return count;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 2, 1};
    Solution s;
    cout << s.minimumOperations(v);
return 0;
}