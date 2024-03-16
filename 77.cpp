#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> temp;
        for (int i = 1; i <= n; i++)
        {
            temp.push_back(i);
        }
        vector<vector<int>> ans;
        for (int i = 0; i < (1<<n); i++)
        {
            vector<int> temp2;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    temp2.push_back(temp[j]);
                }
            }
            if(temp2.size()==k)
            {

            ans.push_back(temp2);
            }
            temp2.clear();
        }
        return ans;
    }
};
int main()
{
    //take input
    int n,k;
    cin>>n>>k;
    Solution s;
    vector<vector<int>> ans=s.combine(n,k);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 
return 0;
}