#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int mis;
        for (int i = 0; i < nums.size(); i++)
        {
            if(i==nums[i])
            {
                continue;
            }
            else
                mis=i;
                break;
        }
       return mis; 
    }
};
int main()
{
    vector<int> v = { 3,0,1 };
    Solution s;
    cout<<s.missingNumber(v);
     return 0;
}