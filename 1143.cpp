#include<bits/stdc++.h>
using namespace std;
#define ll long long;
class Solution {
public:
    int helper(int i, int j, string text1, string text2, vector<vector<int>>& dp)
    {

        if(i==text1.length() ||j==text2.length())
        {
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(text1[i] == text2[j])
        {
            dp[i][j]=1+helper(i+1,j+1,text1,text2,dp);
        }
        else
        {

        int left=helper(i+1,j,text1,text2,dp);
        int right=helper(i,j+1,text1,text2,dp);
        dp[i][j]=max(left,right);
        }

        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return helper(0,0,text1,text2,dp);
    }
};

int main()
{
     
return 0;
}