#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    bool isSubstring(string s1, string s2)
    {
        int M = s1.size();
        int N = s2.size();

        for (int i = 0; i <= N - M; i++)
        {
            int j;
            for (j = 0; j < M; j++)
                if (s2[i + j] != s1[j])
                    break;

            if (j == M)
                return true;
        }

        return false;
    }

    bool canMakeSubsequence(string str1, string str2)
    {
        int i = 0, j = 0;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        while (i < str1.size() && j < str2.size())
        {
            if (str1[i] == str2[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }

        if(j == str2.size())
        {
            return true;

        }
        else{
            return false;
        }
    }
};
int main()
{
    string str1 = "abc", str2 = "ad";
    Solution s;
    cout << s.canMakeSubsequence(str1, str2);   
return 0;
}