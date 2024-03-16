#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string reorganizeString(string s)
    {
        string ans;
        int n = (int)(s.size());
        map<char,int> m;
        for(auto i : s){
            m[i]++;
        }
        // for(auto i:m)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        int k=0;
        // cout<<m.size()<<endl;
       while(k<=m.size())
       {
        for(auto &i:m)
        {
            if(i.second!=ans.back() &i.second>0)
            {
                cout<<i.first<<"endl";
                cout<<i.second<<endl;
                i.second-=1;
                ans=ans+i.first;
            }
        }
                k++;
                // cout<<k<<"ok"<<endl;
       }
    //    if(ans.size())
       for (int i=0;i<ans.size()-1;i++)
       {
            if(ans[i]!=ans[i+1])
            {
                // cout<<i<<" "<<i+1;
                continue;
            }
            else
            {
                return "";
            }
       }
      return ans; 
    }
};
int main()
{
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.reorganizeString(s);
    return 0;
return 0;
}