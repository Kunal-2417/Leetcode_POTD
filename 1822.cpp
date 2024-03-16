#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int count=0;
            for (int i = 0; i < nums.size(); i++)
            {
                if(nums[i]<0)
                {
                    count++;
                }
                if(nums[i]==0)
                {
                    return 0;
                }
            }
            if(count%2==0)
            {
                return 1;
            }
            else{
                return -1;
            }
            
    }
};
int main()
{
    vector<int> nums = {-1, 1, 0, 1, -1};
    Solution obj;
    long long int ans=1;
    for (int i = 0; i < 10000; i++)
    {
        ans=ans*9;
    }
  
    
    cout<<obj.arraySign(nums); 
return 0;
}