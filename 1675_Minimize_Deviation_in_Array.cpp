#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        int n = nums.size();
        priority_queue<int> pq;
        int minVal = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 1)
            {
                nums[i] *= 2;
            }
            pq.push(nums[i]);
            minVal = min(minVal, nums[i]);
        }
        int ans = INT_MAX;
        while (pq.top() % 2 == 0)
        {
            int top = pq.top();
            pq.pop();
            ans = min(ans, top - minVal);
            top /= 2;
            pq.push(top);
            minVal = min(minVal, top);
        }
        return min(ans, pq.top() - minVal);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4, 1, 5, 20, 3};
    cout << s.minimumDeviation(nums) << endl;
return 0;
}