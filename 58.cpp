#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        bool wordStarted = false;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (isalpha(s[i]))
            {
                count++;
                wordStarted = true;
            }
            else if (isspace(s[i]))
            {
                if (wordStarted)
                    break;
            }
        }

        return count;
    }
};
int main()
{
    string s = "   fly me   to   the moon  ";
    Solution p;
    cout<<p.lengthOfLastWord(s);
     return 0;
}