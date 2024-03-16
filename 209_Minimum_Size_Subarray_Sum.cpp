#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {

        int min_len = nums.size()+1;


        for (int start = 0; start < nums.size(); start++)
        {
            int curr_sum = nums[start];

            if (curr_sum > target)
                return 1;

            for (int end = start + 1; end < nums.size(); end++)
            {
                curr_sum += nums[end];
                if (curr_sum > target && (end - start + 1) < min_len)
                    min_len = (end - start + 1);
            }
        }
        return min_len-1;
    }
};
int main()
{
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 100;
    Solution ob;
    cout << ob.minSubArrayLen(target, nums);        
return 0;
}