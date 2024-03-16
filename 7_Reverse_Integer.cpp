#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int reverse(int x)
    {

        // if (x < 4.6566129e-10 && x > 2147483648)
        // {
        //     return 0;
        // }
        // // 2147483648    1534236469
        long long int sum=0;
        int k=0;
        if(x<0)
        {
            k=1;
            x = x*(-1);
        }
        while(x>=1)
        {
            int rem = x%10;
             if (sum> INT_MAX/10 || (sum== INT_MAX / 10 && rem > 7)) return 0;
            if (sum< INT_MIN/10 || (sum== INT_MIN / 10 && rem < -8)) return 0;
            sum = sum*10 + rem;
            x = x/10;
        }
        if(k==1)
        {
            sum = sum*(-1);
        }
        return sum;
    }
};
int main()
{
    Solution s;
    int x = 123;
    cout << s.reverse(x) << endl;
     
return 0;
}