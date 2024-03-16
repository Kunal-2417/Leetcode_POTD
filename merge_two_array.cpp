#include<bits/stdc++.h>
using namespace std;
#define ll long long
    vector<int> merge(vector<int> & nums1, int m, vector<int> &nums2, int n)
    {
        int l = 0, r = 0;
        vector<int> ans;
        while(l<m&&r<n)
        {
            if(nums1[l]<=nums2[r])

            {
                ans.push_back(nums1[l]);
                l++;
            }
            else
            {
                ans.push_back(nums2[r]);
                r++;
            }
        }
        while(l<m)
        {
            ans.push_back(nums1[l]);
            l++;
        }
        while (r < n)
        {
            ans.push_back(nums2[r]);
            r++;
        }
    return ans;
}

int main()
{
    vector<int> k;
    vector<int> l;
    int m=3,n=3;
        k.push_back(1);
        k.push_back(2);
        k.push_back(3);
        k.push_back(0);
        k.push_back(0);
        k.push_back(0);

       
       l.push_back(2);
       
       l.push_back(5);
       
       l.push_back(6);
       vector<int> ans;
       ans=merge(k,m,l,n);
       cout<<"[";
       auto it=ans.begin();
        for (it =ans.begin(); it!=ans.end(); ++it)
        {
            cout<<*it;
            if(it!=(ans.end()-1))
            {
                cout<<",";
            }
        }
        cout<<"]";

           return 0;
}