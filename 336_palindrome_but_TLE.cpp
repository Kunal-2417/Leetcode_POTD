#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isPalindrome(string S)
    {
        // Stores the reverse of the
        // string S
        string P = S;

        // Reverse the string P
        reverse(P.begin(), P.end());

        // If S is equal to P
        if (S == P)
        {
            // Return "Yes"
            return 1;
        }
        // Otherwise
        else
        {
            // return "No"
            return 0;
        }
    }
    vector<vector<int>> palindromePairs(vector<string> &words)
    {
        vector<int> v;
        vector<vector<int>> final;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = i + 1; j < words.size(); j++)
            {
                if (isPalindrome(words[i] + words[j]))
                {
                    v.push_back(i);
                    v.push_back(j);
                    final.push_back(v);
                    v.pop_back();
                    v.pop_back();
                }
                if (isPalindrome(words[j] + words[i]))
                {
                    v.push_back(j);
                    v.push_back(i);
                    final.push_back(v);
                    v.pop_back();
                    v.pop_back();
                }
            }
        }
        return final;
    }
};
int main()
{
    int t;
    cin >> t;
    vector<string> input;
    while (t > 0)
    {
        t--;
        string str;
        cin >> str;
        input.push_back(str);
    }
    Solution ss;
    ss.palindromePairs(input);
}