#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution {
public:
    string minRemoveToMakeValid(string s) {
       stack<pair<char,int>> stk;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == ')')
                stk.push({s[i], i});
            
            else if (!stk.empty() && s[i] == ')' && stk.top().first == '(')
            {
                int index = stk.top().second;
                // remove the pair of brackets from both sides and update its position in stack
                s.erase(index, 1);
                s.erase(i--, 1);
                stk.pop();
            }
        }
        
        while(!stk.empty()){
           int index = stk.top().second;
           s.erase(index,  1);
           stk.pop();
        }
        return s;
    }
};

 
int main()
{
     
return 0;
}