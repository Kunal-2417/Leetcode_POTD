#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int up=0;
        int left=0;
        for (int i = 0; i < moves.size(); i++)
        {
            if(moves[i]=='U')
            {
                up++;
            }
            else if (moves[i] == 'D')
            {
                up--;
            }
            else if (moves[i] == 'L')
            {
                left++;
            }
            else
            {
                left--;
            }
        }
        if(left==0 && up==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
#define ll long long 
int main()
{

        string s="UDU";
        Solution v;
        cout<<v.judgeCircle(s);
return 0;
}