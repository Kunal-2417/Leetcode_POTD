#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    void solve(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp, int index)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = index; i < candidates.size(); i++)
        {
            if (candidates[i] > target)
                break;
            temp.push_back(candidates[i]);
            solve(candidates, target - candidates[i], ans, temp, i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, ans, temp, 0);
        return ans;
    }
};
int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    Solution ob;
    vector<vector<int>> ans = ob.combinationSum(candidates, target);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
     
return 0;
}