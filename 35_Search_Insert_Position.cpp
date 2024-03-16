#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
            int key;
        for (int  i = 0; i < nums.size(); i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            else if(nums[i]<target)
            {
                key=i-1;
            }
            else if(nums[i]>target)
            {
                return i+1;
            }
        }
        return key;
        
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    Solution s;
    int tar;
    cout<<"target"<<tar;
    cout << s.searchInsert(v,tar);
    return 0;
}