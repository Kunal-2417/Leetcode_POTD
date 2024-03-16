#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    void letterCombinationsUtil(string digits, int i, string s, vector<string> &v, map<char, string> &m)
    {
        if (i == digits.size())
        {
            v.push_back(s);
            return;
        }
        for (int j = 0; j < m[digits[i]].size(); j++)
        {
            s.push_back(m[digits[i]][j]);
            letterCombinationsUtil(digits, i + 1, s, v, m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> v;
        if (digits.size() == 0)
            return v;
        string s = "";
        map<char, string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        letterCombinationsUtil(digits, 0, s, v, m);
        return v;
    }
};
int main()
{
    Solution s;
    string digits = "23";
    vector<string > v;
    v=s.letterCombinations(digits);cout << endl;
     
return 0;
}