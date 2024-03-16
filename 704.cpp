#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l=0;
        int r=nums.size()-1;
        while(r-l>1)
        {
            int mid=(r+l)/2;
            if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        if(nums[l]==target)
        {
            return l;
        }
        else if(nums[r]==target)
        {
            return r;
        }
        else{
            return -1;
        }
    }
};
int main()
{
    vector<int> v={-1,0,3,5,9,12} ;
    Solution s;
    cout<<s.search(v,9)<<endl;//-1
return 0;
}