#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int minReorder(int n, vector<vector<int>> &connections)
    {
        map<int,vector<int>> m;
        for(auto i:connections)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(-i[0]);
        }
        int ans=0;
        queue<int> q;
        q.push(0);
        vector<bool> vis(n,false);
        vis[0]=true;
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(auto i:m[x])
            {
                if(i>0 && !vis[i])
                {
                    ans++;
                    q.push(i);
                    vis[i]=true;
                }
                else if(i<0 && !vis[-i])
                {
                    q.push(-i);
                    vis[-i]=true;
                }
            }

        }
        return ans;


        

        
    }
};
int main()
{
    vector<vector<int>> connections = {{0, 1}, {1, 3}, {2, 3}, {4, 0}, {4, 5}};
    int n = 6;
    Solution ob;
    cout<<ob.minReorder(n, connections); 

return 0;
}