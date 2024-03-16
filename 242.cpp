#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        if(s==t)
        {
            return true;
        }
        else
        return false;
    }
};
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    Solution s;
    cout << s.isAnagram(s1, s2);
    return 0;
}