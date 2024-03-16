#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        if (obstacleGrid[0][0] == 1)
            return 0;
        dp[0][0] = 1;
        for (int i = 1; i < m; i++)
        {
            if (obstacleGrid[i][0] == 0)
                dp[i][0] = dp[i - 1][0];
            else
                dp[i][0] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            if (obstacleGrid[0][i] == 0)
                dp[0][i] = dp[0][i - 1];
            else
                dp[0][i] = 0;
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; i < n; j++)
            {
                if (obstacleGrid[i][j] == 0)
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                else
                    continue;
            }
        }
        return dp[m - 1][n - 1];
    }
};
int main()
{

return 0;
}