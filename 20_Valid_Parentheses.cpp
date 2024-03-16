#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isValid(string s)
    {
        map<char, int> vp{
            {'(', 1}, {'[', 2}, {'{', 3}, {')', 1}, {']', 2}, {'}', 3}};
            stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(vp[s[i]]);
            }
            else 
            {
                if(vp[s[i]]==st.top())
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
int main()
{
     string s;
     cin>>s;
     Solution ans;
     cout<<ans.isValid(s);
return 0;
}