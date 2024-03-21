#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int leastInterval(vector<char> &tasks, int n)
    {
        map<char, int> m;
        for (int i = 0; i < tasks.size(); i++)
        {
            m[tasks[i]]++;
        }

        priority_queue<pair<int, int>> max_heap;
        for (auto it : m)
        {
            max_heap.push({it.second, 0});
        }
        queue<pair<int, int>> q;
        int time = 0, f, ft;
        while (!max_heap.empty() || !q.empty())
        {
            time++;
            if(!max_heap.empty())
            {
                f = max_heap.top().first - 1;
                if(f>0)
                {
                ft = time + n;
                q.push({f, ft});
                }
                max_heap.pop();
            }

            if (!q.empty() && q.front().second == time)
            {
                pair<int, int> p = q.front();
                q.pop();
                max_heap.push({p.first, p.second});
            }
        
            }
        
        return time;
    }
};
int main()
{
     
     vector<char> v={'A','A','A','A','B','B','B'};
     Solution s;
     cout<<s.leastInterval(v,1);
return 0;
}