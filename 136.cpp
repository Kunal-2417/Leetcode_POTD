#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int x = 0;
        for (auto i : nums)
        {
            x = x ^ i;
        }
        int rightmostsetbit = x & ~(x - 1);
        int a = 0, b = 0;
        for (auto i : nums)
        {
            if (i & rightmostsetbit)
            {
                a = a ^ i;
            }
            else
            {
                b = b ^ i;
            }
        }
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        sort(v.begin(), v.end());
        return v[0];
    }
};
int main()
{
    vector<int> v = {3, 0, 1};
    Solution s;
    cout << s.singleNumber(v);
    return 0;
}