#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n=height.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j)
        {
            int area=min(height[i],height[j])*(j-i);
            ans=max(ans,area);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};
int main()
{
     int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        Solution s;
        cout<<s.maxArea(v);

return 0;
}