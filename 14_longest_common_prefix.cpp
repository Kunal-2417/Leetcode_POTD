#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string commonPrefixUtil(string &str1, string &str2)
    {
        string result = "";
        int len = min(str1.length(), str2.length());

        // Compare str1 and str2
        for (int i = 0; i < len; i++)
        {
            if (str1[i] != str2[i])
                break;
            result += str1[i];
        }

        return (result);
    }
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++)
            prefix = commonPrefixUtil(prefix, strs[i]);

        return (prefix);
    }
};
int main()
{
    Solution s;
    vector<string>v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        v.push_back(st);
    }
    cout<<s.longestCommonPrefix(v);
     
return 0;
}