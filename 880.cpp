#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string decodeAtIndex(string s, int k)
    {
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                ans+=s[i];
                cout<<ans<<endl;
            }
            else{
                char digitChar = s[i]; 
                // Get the character at index i
                int digit = digitChar - '0';
                digit--;
                string temp=ans;
                while(digit--)
                {
                    ans+=temp;
                    cout<<ans<<endl;
                }
            }
        }
        char final=s[k];
        cout<<final;
        string newS(1, final);
        return newS;
    }
};
int main()
{
     Solution s;
     cout<<s.decodeAtIndex("leet2code3",10);
return 0;
}