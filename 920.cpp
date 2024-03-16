#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int numMusicPlaylists(int n, int goal, int k)
    {
        int mod = 1e9 + 7;
        vector<vector<ll>> dp(goal + 1, vector<ll>(n + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= goal; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dp[i][j] = (dp[i - 1][j - 1] * (n - j + 1)) % mod;
                if (j > k)
                {
                    dp[i][j] = (dp[i][j] + (dp[i - 1][j] * (j - k)) % mod) % mod;
                }
            }
        }
        return dp[goal][n];
    }
};
int main()
{
    Solution s;
    cout<<s.numMusicPlaylists(3,3,1);
     
return 0;
}