#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        multiset<int> s;

        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        if (s.size() == 1)
        {
            return false;
        }
        auto it=s.begin();
        for (int  i = 0; i < s.size()-1; i++)
        {
            cout<<*it<<endl;
            if(*it==*++it)
            {
                return 1;
            }
          
        }
        return 0;
        
        
    }
};
int main()
{
    Solution p;
    int x;
    vector<int> s;
     int n;
     cin>>n;
     while(n>0)
     {
        n--;
        cin>>x;
        s.push_back(x);

     }
     if (p.containsDuplicate(s))
     {
        cout<<"true"<<endl;
     }
     else
     {
        cout<<"false"<<endl;
     }
         return 0;
}