#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution {
public:
    int fib(int n) {
        if(n==1)
        {
            return 1;
        }
        if(n==0)
        {
            return 0;
        }
        int ans;
        ans=fib(n-1)+fib(n-2);
        return ans;

    }
};
int main()
{
    int n;
    cin>>n;
    Solution S;
    cout<<S.fib(n);
     
return 0;
}