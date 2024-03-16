#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        vector<int> k;
        int r = INT16_MIN;
        if (prices.size() == 1)
        {
            return 0;
        }
        int key;

        for (int i = 0; i < prices.size() - 1; i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                if ((prices[j] - prices[i]) > r)
                {
                    r = (prices[j] - prices[i]);
                    cout << j << "--"<<r << endl;

                    key=j;
                    i++;
                }
            }
            cout<<r<<"*"<<endl;
            profit = profit + r;
            
            r=0;
            
        }
        return profit;
    }
}

;
int main()
{
    Solution s;
    int numsArr[] = {1, 2, 3, 0, 2};
    vector<int> v(begin(numsArr), begin(numsArr) + 5);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    cout << s.maxProfit(v);
    return 0;
}