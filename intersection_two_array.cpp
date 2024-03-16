#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
            vector<int> final;
            multiset<int> n1;
            multiset<int> n2;
            for (int i = 0; i < nums1.size(); i++)
            {
                n1.insert(nums1[i]);
            }
            for (int i = 0; i < nums2.size(); i++)
            {
                n2.insert(nums2[i]);
            }
            auto it1=n1.begin();
            auto it2=n2.begin();

            while(it1!=n1.end() && it2!=n2.end())
            {
                if(*it1<*it2)
                {
                    *it1++;
                    continue;;
                }
                else if(*it1>*it2)
                {
                    *it2++;
                    continue;;
                }
                if(*it1==*it2)
                {
                    final.push_back(*it1);
                    *it1++;
                    *it2++;
                    continue;;
                }
            }
            return final;
    }
};
int main()
{
    Solution s;
     vector<int> nums1;
     vector<int> nums2;
     nums1.push_back(1);
     nums1.push_back(2);
     nums1.push_back(2);
     nums1.push_back(1);
     nums2.push_back(2);
     nums2.push_back(2);

     vector<int> ans;
     ans=s.intersect(nums1,nums2);
     for (auto it =ans.begin(); it !=ans.end(); it++)
     {
        cout<<*it;
     }
     
     return 0;
}