#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<string> substring(string s)
    {
        vector<string> ans;
        long long int n = s.size();
        for (long long int len = 1; len <= n; len++)
        {
            for (long long int i = 0; i <= n - len; i++)
            {
                ans.push_back(s.substr(i, len));
            }
        }
        return ans;
    }
    bool isPalindrome(string s)
    {
        long long int n = s.size();
        for (long long int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s)
    {
        vector<string> ans = substring(s);
        long long int n = ans.size();
        long long int max = 0;
        string res = "";
        for (long long int i = 0; i < n; i++)
        {
            if (isPalindrome(ans[i]))
            {
                if (ans[i].size() > max)
                {
                    max = ans[i].size();
                    res = ans[i];
                }
            }
        }
        return res;
    }
};
int main()
{
    string in;
    cin >> in;
    Solution s;
    cout << s.longestPalindrome(in);

    
return 0;
}