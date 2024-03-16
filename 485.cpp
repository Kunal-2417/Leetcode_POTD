#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0, max = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                if (count > max)
                {
                    max = count;
                }
                count = 0;
            }
        }
        if (count > max)
        {
            max = count;
        }
        return max;
    }
};
int main()
{
    vector<int> v = {3, 0, 1};
    Solution s;
    cout<<s.findMaxConsecutiveOnes(v);
    return 0;
}