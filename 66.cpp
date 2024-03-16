
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        int carry = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] + carry == 10)
            {
                digits[i] = 0;
                carry = 1;
            }
            else
            {
                digits[i] += carry;
                carry = 0;
            }
        }
        if (carry == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;

    }
};


int main()
{
    vector<int> digits = {9,8,9};
    Solution obj;
    obj.plusOne(digits);
    for (auto i : digits)
    {
        cout << i << " ";
    }
    return 0;
}