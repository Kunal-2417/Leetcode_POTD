#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans;
        int n1=word1.size();
        int n2=word2.size();
        int i=0;
        int j=0;
        while(n1>0 ||n2>0)
        {
            if(n1>0)
            {
                ans+=word1[i];
                i++;
                n1--;
            }
            if(n2>0)
            {
                ans+=word2[j];
                j++;
                n2--;
            }
        }
        return ans;
    }
};
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    Solution s;
    cout<<s.mergeAlternately(s1,s2);

     
return 0;
}