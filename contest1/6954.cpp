#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if((nums[i]+nums[j])<target)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
int main()
{
    vector<int> v = {-6, 2, 5, -2, -7, -1, 3};
    Solution s;
    int t=-2;
    cout<<s.countPairs(v,t); 
return 0;
}