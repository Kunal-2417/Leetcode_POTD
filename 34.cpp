#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans;
        int l = 0;
        int h = nums.size() - 1;

        int mid;
        if(nums.size()==0)
        {
            l = -1;
            h = -1;
            ans.push_back(l);
            ans.push_back(h);
            return ans;
        }
        while (h - l > 1)
        {
            mid = (l + h) / 2;
            if (nums[mid] < target)
            {
                l = mid + 1;
                // cout<<"->"<<l<<endl;
            }
            else
            {

                h = mid;
                // cout<<"->"<<h<<endl;
            }
        }
        // if(l==nums.size()-1)
        // {
        //     ans.push_back(l);
        //     ans.push_back(l);
        // }
        if (nums[l] == target)
        {
            // cout << "*" << l << "*" << endl;
            ans.push_back(l);
            int i ;
            for (i = l; i < nums.size(); i++)
            {
                if(nums[i]==target)
                {
                    continue;
                }
                break;
            }
            ans.push_back(i-1);
        }
        else if (nums[h] == target)
        {
            // cout << "*" << h << "*" << endl;
            ans.push_back(h);
            int i;
            for (i = h; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    continue;
                }
                break;
            }
            ans.push_back(i - 1);
            // cout<<"*";

        }
        else
        {
            // cout << "NOT FOUND: ";
            l=-1;
            h=-1;
            ans.push_back(l);
            ans.push_back(h);

        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {};
    int target=6;
    vector<int> ans;
    ans=s.searchRange(nums,target);
    auto it=ans.begin();
    for (it = ans.begin(); it != ans.end(); ++it)
    {
        cout << *it << endl;
    }

return 0;
}