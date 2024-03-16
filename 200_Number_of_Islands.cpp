#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    // int count=0;

    void dfs(int i, int j, int initialColor, int newColor, vector<vector<char>> &image)
    {
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] != initialColor)
        {
            return;
        }
        image[i][j] = newColor;
        dfs(i + 1, j, initialColor, newColor, image);
        dfs(i - 1, j, initialColor, newColor, image);
        dfs(i, j + 1, initialColor, newColor, image);
        dfs(i, j - 1, initialColor, newColor, image);
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int initialColor = '1';
        int newColor = '2';
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==initialColor)
                {
                    count++;
                    dfs(i,j,initialColor,newColor,grid);
                }
            }
        }
        return count;
    }

};
        // return count;

int main()
{
         
        vector<vector<char>> grid = {{'1', '1', '1', '1', '0'},
                                    {'1', '1', '0', '1', '0'},
                                    {'1', '1', '0', '0', '0'},
                                    {'0', '0', '0', '0', '0'}};
        Solution ob;
        cout<<ob.numIslands(grid);
return 0;
}