#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string intToRoman(int num)
    {
        string res = "";
        vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> strs = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < nums.size(); i++)
        {
            while (num >= nums[i])
            {
                num -= nums[i];
                res += strs[i];
            }
        }
        return res;
    }
};
int main()
{
    Solution s;
    cout << s.intToRoman(3) << endl;
    cout << s.intToRoman(4) << endl;
    cout << s.intToRoman(9) << endl;
    cout << s.intToRoman(58) << endl;
    cout << s.intToRoman(1994) << endl;
     

return 0;
}