#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n=arr[1]-arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if(arr[i]-arr[i-1]==n)
            {
                continue;
            }
            else{
                return false;
            }
        }
       return true; 
    }
};
int main()
{
    vector<int> m={3,5,1};
    Solution s;
    cout<<s.canMakeArithmeticProgression(m);
     
return 0;
}