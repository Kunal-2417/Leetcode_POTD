#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>> &image)
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
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int initialColor = image[sr][sc];
        if (initialColor != color)
        {
            dfs(sr, sc, initialColor, color, image);
        }
        return image;
    }
};
int main()
{

    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int sr = 1, sc = 1, color = 2;
    Solution ob;
    ob.floodFill(image, sr, sc, color);
    return 0;
}