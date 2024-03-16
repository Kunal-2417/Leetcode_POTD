#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int minTaps(int n, vector<int> &ranges)
    {
        map<int,pair<int,int>>m;
        for (int i = 0; i < ranges.size(); i++)
        {
            pair<int,int> temp;
            int ini=i-ranges[i];
            int last=i+ranges[i];
            temp=make_pair(ini,last);
            m.insert({i,temp});
        }
        
    }
};
int main()
{
     int n=5;
    //  cin>>n;
     vector<int> v={3,4,1,1,0,0};
     Solution s;
     cout<<s.minTaps(n,v);
return 0;
}