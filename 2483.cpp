#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int bestClosingTime(string customers)
    {
        int n = customers.size(); 
        int min=0;
        for (int i = 0; i < n; i++)
        {
            if(customers[i]=='Y')
            {
                min++;
            }
        }
        if(min==0)
        {
            return 0;
        }
        int temp=INT16_MAX;
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            if(customers[i]=='Y')
            {
                min--;
            }
            else min++;
            
            if(temp>min)
            {
                temp=min;
                if(m[temp]==0 && customers[i]!='N')
                {
                    m[temp]=i+1;
                }
                else if (m[temp] == 0 && customers[i] == 'N')
                    m[temp] = i;
            }
        }
        
       return m[temp]; 
    }
};
int main()
{
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.bestClosingTime(s);   
return 0;
}