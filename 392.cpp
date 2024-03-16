#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int j=0;
        if(s.size()==0 && t.size()==0)
        {
            return true;
        }
        for (int i = 0; i < t.size(); i++)
        {
            if(s[j]==t[i])
            {
                j++;
            }
            if(j==s.size())
            {
                return true;
            }
        }
        
    return false;
    }
};
int main()
{
     Solution s;
     cout<<s.isSubsequence("abc","ahbgdc");
return 0;
}