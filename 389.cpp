#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       for(int i=0;i<s.size();i++)
       {
        if(s[i]!=t[i])
        {
            
        return s[i];
        }
        else
            continue;
       }
     return t[s.size()+1];

    }
};
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    Solution s;
    cout<<s.findTheDifference(s1,s2);
    return 0;
}