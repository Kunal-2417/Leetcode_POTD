#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n1 = haystack.size();
        int n2 = needle.size();
        if (n2 > n1)
        {
            return -1;
        }
        for (int i = 0; i < n1; i++)
        {
            int key = 0;
            int k = n2;
            int j = i;
            if (haystack[j] == needle[0])
            {

                while (k > 0)
                {
                    if (haystack[j] == needle[key])
                    {
                        key++;
                        j++;
                        k--;
                    }
                    else
                    {
                        // key=0;
                        break;
                    }
                }
                if (key == n2)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    Solution s;
    cout << s.strStr(s1,s2);
    return 0;
}