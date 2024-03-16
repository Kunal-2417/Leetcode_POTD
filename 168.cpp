#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0)
        {
            int rem=columnNumber%26;
            if(rem==0)
            {
                ans+='Z';
                columnNumber=columnNumber/26-1;
            }
            else
            {
                ans+=rem-1+'A';
                columnNumber=columnNumber/26;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
     
return 0;
}