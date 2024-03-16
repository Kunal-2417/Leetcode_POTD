#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int size=matrix.size()*matrix[1].size();
        int n=matrix[0].size();
        // cout<<matrix[0][0];
        int k;
        for (int i = 0; i < matrix.size(); ++i)
        {
             if (matrix[i][n - 1] < target)
            {   
                k=i;
                continue;
            }
            k=i;
            break;
        }
        vector<int> ans;
        for (int i = 0; i < matrix[k].size(); ++i)
        {
            ans.push_back(matrix[k][i]);
        }
        int l = 0;
        int h = ans.size() - 1;

        while (l <= h)
        {
            int mid = l + (h - l) / 2;

            if (ans[mid] == target)
                return true;

            if (ans[l] <= ans[mid])
            {
                if (ans[l] <= target && target < ans[mid])
                    h = mid - 1;
                else
                    l = mid + 1;
            }
            else
            {
                if (ans[mid] < target && target <= ans[h])
                    l = mid + 1;
                else
                    h = mid - 1;
            }
        }

        return false;
        // return k;
        
    }
};
int main()
{
    Solution s;
    vector<vector<int>> matrix = {{1}};
    int target = 2;
    // cout<<matrix[1].size();

    cout << s.searchMatrix(matrix, target);     
return 0;
}