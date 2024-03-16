#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        // string temp;
        // temp=s.substr(0,s.size()/2);
        // // cout<<temp;
            string ans;
            int key = 0;
            // ans=s.substr(s.size()/2,s.size()/2);
                    
            for (int i = 1; i < s.size(); i++)
            {
                    string temp1,temp2;
                if(s[0]==s[i])
                {
                    temp1=s.substr(0,i);
                    int j=i;
                    if(s.size()%i!=0)
                    {
                        key=0;
                        continue;
                    }
                    while(j<s.size())
                    {
                        temp2=s.substr(j,i);
                        if(temp1==temp2)
                        {
                            key=1;
                            if((j+i)==s.size())
                            {
                                return true;
                            }
                        }
                        else{
                            key=0;
                            break;
                        }
                        j+=i;
                    }                   
                }
                
            }
            
    
            if(!key){
            return false;
            }
            else{
                return true;
            }
    }
};
int main()
{
    string s1, s2;
    cin >> s1;
    Solution s;
    cout << s.repeatedSubstringPattern(s1);
    return 0;
}