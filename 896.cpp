#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        if(nums.size()==1)
        {
            return true;
        }
        int key=0;
        if(nums[0]>=nums[nums.size()-1])
        {
            key=1;
        }
        else{
            key=0;
        }
        for (int i = 1;i < nums.size();++i){
            
            if(key==1)
            {
                if(nums[i]<=nums[i-1])
                {
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                
                if(nums[i]>=nums[i-1]){
                    
                    continue;
                }
                else{
                    return false;
                }
            }
            }
        
        return true;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2,1,3,1};
    
    cout<<s.isMonotonic(nums);
     
return 0;
}