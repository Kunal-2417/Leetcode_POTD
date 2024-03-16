#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int naya(vector<int> nums, int prod)
    {
        if (nums.size() == 0)
        {
            return prod;
        }

        int maxProd = prod;
        for (int i = 0; i < nums.size(); i++)
        {
            maxProd = max(maxProd, naya(vector<int>(nums.begin() + i + 1, nums.end()), prod * nums[i]));
        }
        return maxProd;
    }

    int maxProduct(vector<int> &nums)
    {
        return naya(nums, 1);
    }
};

int main()
{
     
return 0;
}