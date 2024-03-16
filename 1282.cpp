#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        vector<vector<int>> ans;
        map<int,vector<int>> m;
        for (int i = 0; i < groupSizes.size(); i++)
        { 
            m[groupSizes[i]].push_back(i);
        }
        // cout<<endl;
        // for (auto i:m)
        // {
        //     cout<< i.first<<"-> ";
        //     int n = i.second.size();
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout<<i.second[j];
        //     }
        //     cout<<endl;
        // }
        
        for(auto i:m)
        {
            // cout<<i.second.size();
            int k=i.second.size()/i.first;
                int temp=0;
                vector<int> key;
                int n=i.second.size();
                for (int j = 0; j <n; j++)
                {
                    int k=i.second[j];
                    // cout<<k<<endl;
                    key.push_back(k);
                    i.second.pop_back();
                    temp++;
                    if(temp==i.first)
                    {
                        ans.push_back(key);
                        key.clear();
                        temp=0;
                    }
                }
        }
        return ans;
    }
};
int main()
{
     vector<int> v={3,3,3,3,3,1,3};
     Solution s;
     s.groupThePeople(v);
return 0;
}