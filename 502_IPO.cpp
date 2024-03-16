#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
    {
        int n = profits.size();
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back({capital[i], profits[i]});
        }
        sort(arr.begin(), arr.end());
        priority_queue<int> pq;
        int i = 0;
        while (k--)
        {
            while (i < n && arr[i].first <= w)
            {
                pq.push(arr[i].second);
                i++;
            }
            if (pq.empty())
            {
                break;
            }
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};
int main()
{
    Solution s;
    vector<int> profits = {1, 2, 3};
    vector<int> capital = {0, 1, 1};
    int k = 2;
    int w = 0;
    cout << s.findMaximizedCapital(k, w, profits, capital) << endl;
     
return 0;
}