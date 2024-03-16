#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int addDigits(int num)
    {
        int ans=0;
        while(num>=1)
        {
            ans=ans+num%10;
            num=num/10;
        }
        num=ans;
        if(num>9)
        {
           return addDigits(num);
        }
        else
        {
            return num;
        }
    }
};
int main()
{
    int n;
    cin >> n;

    Solution s;
    cout << s.addDigits(n);
    return 0;
}