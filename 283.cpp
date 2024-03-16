#include<bits/stdc++.h>
using namespace std;

#define ll long long
class Solution
{
public:
    void rvereseArray(int arr[], int start, int end)
    {
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    void moveZeroes(vector<int> &nums)
    {
        int j=nums.size();
        int k=j;
        int ans[j];
        int i=0;
            while(!nums.empty())
            {
                int k=nums.back();
                nums.pop_back();
                cout<<k<<endl;
                if(k!=0)
                {
                ans[i]=k;
                i++;
                }
                    else{
                        ans[j-1]=k;
                        j--;
                    }
            }

            rvereseArray(ans,0,j-1);
             for (int i = 0; i < k; i++)
            {
                nums.push_back(ans[i]);

            }
          
    }
        
    
};
int main()
{
    vector<int> nums = { 0, 1, 0, 3, 12 };
    Solution obj;
    obj.moveZeroes(nums);
    for (auto i : nums){
            cout<<i<<" ";
        }
        return 0;
}