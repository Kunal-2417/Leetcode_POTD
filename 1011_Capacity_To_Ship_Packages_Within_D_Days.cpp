#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            int need = 1;
            int curr = 0;
            for (int i = 0; i < n; i++)
            {
                if (curr + weights[i] > mid)
                {
                    need++;
                    curr = 0;
                }
                curr += weights[i];
            }
            if (need > days)
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        return low;
    }
};
int main()
{
    Solution s;
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    cout << s.shipWithinDays(weights, days) << endl;
return 0;
}