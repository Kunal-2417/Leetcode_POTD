#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
   
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> sum;
        int count=0;
        for(auto it=nums.begin();it!=nums.end();++it)
        {
            count++;
        }
        cout<<count<<endl;
        for (int i = 0; i < count; i++)
        {
            for (int j = i+1; j < count; j++)
            {
                cout<<i<<j<<endl;
                if(nums[i]+nums[j]==target)
                {
                    
                sum.push_back(i);
                sum.push_back(j);
                }
            }
            
        }
        return sum;
        
    }
};
int main()
{
    Solution c;
    vector<int> k;
    vector<int> v;
    int t;
    cin>>t;
    while(t>0)
    {
        
        t--;
        int x;
        cin>>x;
        v.push_back(x);
    }
    int tar;
    cin>> tar;
   k= c.twoSum(v,tar);
   for (auto it=k.begin(); it!=k.end();it++)
   {
    cout<<*it<<endl;
   }
   

     
return 0;
}