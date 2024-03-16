#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        map<int,vector<int>> m;
        for(auto i:connections)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
    //    cout<<m.size();
    if(m.size()>n)
    {
        return -1;
    }
       n=n-m.size();
       int t=0;
       for(auto i:m)
       {
        if(i.second.size()>1 &&n>0)
        {
            n=n-i.second.size()-1;
            t=t+i.second.size()-1;
        }
       }
    if(n>0)
    {
        return -1;
    }
    return t;
    }
};
int main()
{
    vector<vector<int>> connections = {{0, 1}, {0, 2}, {1, 2}};
    int n = 4;
    Solution ob;
    cout<<ob.makeConnected(n, connections);
     
return 0;
}