#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {


        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (auto i : strs)
        {
            string temp = i;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
        for (auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
         
    }
};
int main()
{
    
        vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
        Solution ob;
        vector<vector<string>> ans = ob.groupAnagrams(strs);
        // for (auto i : ans)
        // {
        //     for (auto j : i)
        //         cout << j << " ";
        //     cout << endl;
        // } 
        cout<<strs.size();
return 0;
}