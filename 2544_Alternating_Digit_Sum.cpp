#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int alternateDigitSum(int n)
    {
        int sum=0;
        int k=1;
        while(n>=1)
        {
            sum=sum*10+n%10;
            n=n/10;
        }
        int ans=0;
        while(sum>=1)
        {
            ans=ans+k*(sum%10);
            k=-k;
            sum=sum/10;
        }
    return ans;
    }
};
int main()
{
    int n;
    cin>>n;

     Solution s;
    cout<<s.alternateDigitSum(n); 
return 0;
}