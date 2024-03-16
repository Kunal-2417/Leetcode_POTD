#include<bits/stdc++.h>
using namespace std;
#define ll long long 
class Solution
{
public:
   long long int fact(int n)
    {
        long long int ans = 0;
        while (n > 0)
        {
            ans = ans + n;
            n--;
        }
        return ans;
    }
    bool isPalindrome(string str)
    {
        int low = 0;
        int high = str.length() - 1;

        while (low < high)
        {
            // if a mismatch happens
            if (str[low] != str[high])
            {
                return false;
            }

            low++;
            high--;
        }

        return true;
    }
    vector<vector<int>> palindromePairs(vector<string> &words)
    {
        vector<int> v;
        vector<vector<int>> final;
        vector<vector<int>> final2;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = i + 1; j < words.size(); j++)
            {
                v.push_back(i);
                v.push_back(j);
                final2.push_back(v);
                v.pop_back();
                v.pop_back();
            }
        }
        // cout<<fact(words.size()-1);
        for(int i=0;i<fact(words.size()-1);i++)
        {
            int x=final2[i][0];
            int y=final2[i][1];
            if (isPalindrome(words[final2[i][0]] + words[final2[i][1]]))
            {
                v.push_back(final2[i][0]);
                v.push_back(final2[i][1]);
                final.push_back(v);
                v.pop_back();
                v.pop_back();
            }
            if (isPalindrome(words[final2[i][1]] +words[final2[i][0]] ))
            {
                
                v.push_back(final2[i][1]);
                v.push_back(final2[i][0]);
                final.push_back(v);
                v.pop_back();
                v.pop_back();
            }
        }
        return final;
    }
};
int main()
{
    int t;
    cin>>t;
    vector<string> input;
    while(t>0)
    {
        t--;
        string str;
        cin>>str;
        input.push_back(str);
    }
    Solution ss;
    vector<vector<int>> deepu;
    deepu=ss.palindromePairs(input);
    int l=ss.fact(input.size()-1);
    for (int i = 0; i < l; i++)
    {
        cout<<deepu[i][0]<<deepu[i][1]<<endl;
    }
    

}