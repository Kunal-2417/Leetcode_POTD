#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int sum = 0;
        unordered_map<int, int> m;
        unsigned int longestContArray = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += (nums[i] == 0) ? -1 : 1;

            auto it = m.find(sum);

            if (sum == 0)
            {
                if (longestContArray < i + 1)
                    longestContArray = i + 1;
            }
            else if (it != m.end())
            {
                if (longestContArray < i - it->second)
                    longestContArray = i - it->second;
            }
            else if (it == m.end())
                m.insert({sum, i});
        }
        return longestContArray;
    }
};
int main()
{
     
     vector<int> v={1,0};
     Solution sol;
     cout<<sol.findMaxLength(v);
return 0;
}