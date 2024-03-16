#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    void generate(vector<vector<int>> &ans, vector<int> &temp, vector<int> &candidates, int target, int start)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++)
        {
            if (i > start && candidates[i] == candidates[i - 1])
                continue;
            if (candidates[i] > target)
                break;
            temp.push_back(candidates[i]);
            generate(ans, temp, candidates, target - candidates[i], i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        generate(ans, temp, candidates, target, 0);
        return ans;
    }
};

int main()
{
    vector<int> candidates = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int target = 27;
    Solution ob;
    vector<vector<int>> ans = ob.combinationSum2(candidates, target);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}