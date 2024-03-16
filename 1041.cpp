#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool isRobotBounded(string instructions)
    {
        //north
        char dir='n';
        int x=0,y=0;

        for (int i = 0; i < instructions.size(); i++)
        {
            if(instructions[i]=='G'){
                if (dir == 'n')
                {
                    y++;
                }
                else if (dir == 'w')
                {
                    x--;
                }
                else if (dir == 'e')
                {
                    x++;
                }
                else if (dir == 's')
                {
                    y--;
                }
            }
            else if(instructions[i]=='L')
            {
                if(dir=='n')
                {
                    dir='w';
                }
                else if(dir=='w')
                {
                    dir='s';
                }
                else if(dir=='s')
                {
                    dir='e';
                }
                else if(dir=='e')
                {
                    dir='n';
                }
            }
            else if (instructions[i] == 'R')
            {
                if (dir == 'n')
                {
                    dir = 'e';
                }
                else if (dir == 'w')
                {
                    dir = 'n';
                }
                else if (dir == 's')
                {
                    dir = 'w';
                }
                else if (dir == 'e')
                {
                    dir = 's';
                }
            }
        }
        
        if(x==0 && y==0 || dir!='n')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    string s = "GL";
    cout<<Solution().isRobotBounded(s);
    return 0;
     
return 0;
}