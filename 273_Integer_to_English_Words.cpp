#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string helper(int num, vector<string> &nums, vector<string> &tens)
    {
        if (num == 0)
            return "";
        else if (num < 20)
            return nums[num] + " ";
        else if (num < 100)
            return tens[num / 10] + " " + helper(num % 10, nums, tens);
        else
            return nums[num / 100] + " Hundred " + helper(num % 100, nums, tens);
    }
    string numberToWords(int num)
    {
        if (num == 0)
            return "Zero";
        vector<string> strs = {"", "Thousand", "Million", "Billion"};
        vector<string> nums = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        string res = "";
        int i = 0;
        while (num > 0)
        {
            if (num % 1000 != 0)
                res = helper(num % 1000, nums, tens) + strs[i] + " " + res;
            num /= 1000;
            i++;
        }
        while (res.back() == ' ')
            res.pop_back();
        return res;
    }
};
int main()
{
    Solution s;
    cout << s.numberToWords(123) << endl;
    cout << s.numberToWords(12345) << endl;
    cout << s.numberToWords(1234567) << endl;
    cout << s.numberToWords(1234567891) << endl;
     
return 0;
}