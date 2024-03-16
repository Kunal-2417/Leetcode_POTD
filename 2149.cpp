#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;
        int n=nums.size();
        for (auto i : nums){
            if(i<0)
            {
                neg.push_back(i);
            }
            else{
                pos.push_back(i);}
            }
        nums.clear();
        int k;
         for (int i = 0; i < n-1; i++)
        {
            
        if(pos.size()>neg.size())
        {
            if(pos.size()>0)
            {

            k=pos.back();
            nums.push_back(k);
            pos.pop_back();
            }
            if(neg.size()>0)
            {

            k=neg.back();
            nums.push_back(k);
            neg.pop_back();
            }
            }
            else
            {
                if(neg.size()>0)
                {
                    
            k=neg.back();
            nums.push_back(k);
            neg.pop_back();
                }
                if(pos.size())
                {

            k=pos.back();
            nums.push_back(k);
            pos.pop_back();
                }
            }
            }
            reverse(nums.begin(),nums.end());
            return nums;
        }   
};
int main()
{
    vector<int> v={3,1,-2,-5,2,4};
    Solution s;
    vector<int> ans;
    ans=s.rearrangeArray(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
return 0;
}