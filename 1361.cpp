#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool validateBinaryTreeNodes(int n, vector<int> &leftChild, vector<int> &rightChild)
    {
        map<int,int> m;;
               for (auto i : leftChild){
                if(i!=-1)
                {
                    m[i]++;
                }
               }
                for (auto i : rightChild)
                {
                    if (i != -1)
                    {
                        m[i]++;
                    }
                }
        for (auto i:m)
        {
            if(i.second>1)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
     
return 0;
}