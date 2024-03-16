#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    
    vector<vector<int>> twoSum(vector<int> &nums)
    {
        vector<vector<int>> ne;
        vector<int> sum;
        int count = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            count++;
        }
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                // cout<<i<<j<<endl;
                // cout<<nums[i];
                // cout<<nums[j]<<endl;

                sum.push_back(nums[i]);
                sum.push_back(nums[j]);

                ne.push_back(sum);
                sum.pop_back();
                sum.pop_back();
            }

        }
        return ne;
    }
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> final,ne1;
        ne1=twoSum(nums);
        vector<int> l;
        int x=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            // cout << ne1[i][0] << ne1[i][1];
            for(int j=0;j<nums.size();j++)
            {
             if (ne1[i][0] != nums[i] && ne1[i][0] != nums[i])
            {
                if (ne1[i][0] + ne1[i][0] +nums[i]==0)
                {
                    // cout<<ne1[i][0]<<ne1[i][1]<<nums[i]<<endl;
                    l.push_back(ne1[i][0]);
                    l.push_back(ne1[i][1]);
                    l.push_back(nums[j]);
                    final.push_back(l);
                    l.pop_back();
                    l.pop_back();
                    l.pop_back();
                }
            }
            }

        } 
        return final;
    }
};
int main()
{
    Solution c;
    vector<vector<int>> k;
    vector<int> v;
    int t;
    cin >> t;
    while (t > 0)
    {

        t--;
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    k = c.threeSum(v);
    for (int i=0;i<k.size();i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<k[i][j];
        }
        cout<<endl;
    }

    return 0;
}