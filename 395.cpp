#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int longestSubstring(string s, int k)
    {
        int n=s.size();
        if(n==0 ||k>n)
        {
            return 0;
        }
        unordered_map <char,int > mp1; //to store the count of each character
        for (int i = 0; i < n; i++)
        {
            mp1[s[i]]++;
        }
        for(auto p:mp1){

        cout<<p.first<<" "<<p.second<<endl;
        }
        unordered_map<char, int> mp2;
        for (auto p : mp1)
        {
        if(p.second>=k)
        {
            mp2[p.first]=p.second;
        }
        else{
            mp2[p.first] = 0;
        }
        }
        unordered_map<char, int> mp3;
        for (auto p : mp2)
        {
        if (p.second >= k)
        {
            mp3[p.first] = k;
        }
        }
        for (auto p : mp2)
        {

        cout << p.first << " " << p.second << endl;
        }
        int ini=0,last=0,max=0;int temp=0;
        for (int i = 0; i < n; i++)
        {
            if(mp2[s[i]]!=0)
            {
                last++;
                mp3[s[i]]--;
                temp=last-ini+1;
                int key=0;
                for (auto p : mp3)
                {
                    if(p.second<=0)
                    {
                        key=1;
                        continue;
                    }
                    else
                    {
                        key=0;
                        break;
                    }
                }
            if(key==1)
            {
                if(max<temp)
                {
                    max=temp;
                }
            }
            }
            else{
                ini=i+1;
                last=i+1;
            }
            for (auto p : mp2)
            {
                if (p.second >= k)
                {
                mp3[p.first] = k;
                }
            }
        }
        
        return max;
    }
};
int main()
{
    Solution p;
    string s = "ababbc";
    int k=2;
    cout<< p.longestSubstring(s, k);
    return 0;
}