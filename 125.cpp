#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    // bool isPal(string s,int start,int last)
    // {
    //     if(last<start)
    //     {
    //         return true;
    //     }
    //     if(s[start]!=s[last])
    //     {
    //         return false;
    //     }
    //     else
    //     {

    //     return isPal(s,start+1,last-1);
    //     }
    // }
    // string removeNonAlpha(string &input)
    // {
    //     string result;

    //     for (char c : input)
    //     {
    //     if (isalpha(c))
    //     {
    //         if(isupper(c))
    //         {
    //             result+=tolower(c);
    //         }
    //         else
    //         result += c;
    //     }
    //     if(isdigit(c))
    //     {
    //         result += c;
    //     }
    //     }

    //     return result;
    // }
    // bool isPalindrome(string s)
    // {
    //     s=removeNonAlpha(s);
    //     bool ans=isPal(s,0,s.length()-1);
    //     return ans;
    // }
    bool isPal(const std::string &s)
    {
        int start = 0;
        int end = s.length() - 1;

        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    std::string removeNonAlpha(const std::string &input)
    {
        std::string result;

        for (char c : input)
        {
            if (isalnum(c))
            {
                if (isupper(c))
                {
                    result += tolower(c);
                }
                else
                {
                    result += c;
                }
            }
        }

        return result;
    }

    bool isPalindrome(const std::string &s)
    {
        std::string cleaned = removeNonAlpha(s);
        return isPal(cleaned);
    }
};
int main()
{
    string s;
    cin>>s;
    Solution S;
    cout<<S.isPalindrome(s); 
return 0;
}