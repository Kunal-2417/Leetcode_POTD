#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        unordered_map<char,int> m;
        while(j<n)
        {
            if(m.find(s[j])==m.end())
            {
                m[s[j]]=j;
                j++;
                ans=max(ans,j-i);
            }
            else
            {
                m.erase(s[i]);
                i++;
            }
        }
        return ans;

    }
};
int main()
{
     string in;
     cin>>in;
     Solution s;
     cout<<s.lengthOfLongestSubstring(in);

return 0;
}