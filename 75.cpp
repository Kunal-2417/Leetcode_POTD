#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        // cout<<m[2];
        nums.clear();
        while(m[0]>0)
        {
            nums.push_back(0);
            m[0]--;
        }
        while (m[1] > 0)
        {
            nums.push_back(1);
            m[1]--;
        }
        while (m[2] > 0)
        {
            nums.push_back(2);
            m[2]--;
        }
    }
};
int main()
{
    Solution s;
    vector<int> v={2,0,2,1,1,0};
    s.sortColors(v);
    for(auto i:v)
    {
        cout<<i<<" ";
    }     
return 0;
}