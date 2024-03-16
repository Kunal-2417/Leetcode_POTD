#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        // cout<<operations[1][0]<<endl;
        vector<int> ans;
        
        
        for (int i = 0; i < operations.size(); i++)
        {
           
            if(operations[i][0]=='+')
            {
                int k=ans.rbegin()[1]+ans.rbegin()[0];
                ans.push_back(k);
            }
            else if(operations[i][0]=='D')
            {
                int k = ans.rbegin()[0] * 2;
                ans.push_back(k);
            }
            else if (operations[i][0] == 'C')
            {
                ans.pop_back();
            }
            else
            {
                // cout<<"*";
                string k = operations[i];
                int p = stoi(k);
                cout << p << endl;

                ans.push_back(p);
            }
        }
        int count=0;
        while(!ans.empty())
        {
            int k=ans.back();
            // cout<<k<<endl;
            count=count+k;
            ans.pop_back();
        }
        return count;
        
    }
};
int main()
{
    vector<string> v = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    Solution s;
    cout<<s.calPoints(v);
     return 0;
}