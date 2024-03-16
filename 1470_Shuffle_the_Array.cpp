#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};
int main()
{
     vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector<int> ans;
        Solution s; 
        ans=s.shuffle(v,n);


return 0;
}