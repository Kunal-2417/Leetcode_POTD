#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        map<string,int> m;
        vector<string> ans;
        if(s.size()<10)
        {
            return ans;
        }
        int n=0;
        vector<string> temp;
        for(int i=0;i<s.size()-9;i++)
        {
            string k=s.substr(n,10);
            temp.push_back(k);
            n++;
        }
        for(int i=0;i<temp.size();i++)
        {
            m[temp[i]]++;
        }
        for(auto x:m)
        {
            if(x.second>1)
            {
                ans.push_back(x.first);
                }
                }
                return ans;
    }
};
int main()
{
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    Solution ob;
    vector<string> ans=ob.findRepeatedDnaSequences(s);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
return 0;
}