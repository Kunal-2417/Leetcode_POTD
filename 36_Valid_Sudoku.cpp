#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int n=board.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(board[i][j]!='.')
                {
                    for (int k = 0; k < n; k++)
                    {
                        if(board[i][j]==board[i][k] && k!=j)
                        {
                            return false;
                        }
                    }
                    for (int k = 0; k < n; k++)
                    {
                        if(board[i][j]==board[k][j] && k!=i)
                        {
                            return false;
                        }
                    }
                    int x=i/3;
                    int y=j/3;
                    for (int k = 0; k < 3; k++)
                    {
                        for (int l = 0; l < 3; l++)
                        {
                            if(board[i][j]==board[x*3+k][y*3+l] && (x*3+k)!=i && (y*3+l)!=j)
                            {
                                return false;
                            }
                        }
                        
                    }
                    
                }
            }
            
        }
        
        return true;
    }
};
int main()
{
    Solution s;
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    // cout << s.isValidSudoku(board) << endl;
    cout<<board.size();

     
return 0;
}