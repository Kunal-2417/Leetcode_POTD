#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int findLength(vector<int> &nums1, vector<int> &nums2)
    {
        int count=0;
       
        for(int i=0;i<nums1.size();i++)
        {
            int min = 0;
            int j=0;
            while(nums1[i]!=nums2[j] && j<nums2.size())
            {
                j++;
            }
            // if(nums1[i]==nums2[j])
            // {
                int k=i;
                while (nums1[k] == nums2[j] && k < nums1.size() && j < nums2.size())
                {
                    min++;
                    k++;
                    j++;
                }
                
            

            if(min>count)
            {
                count=min;
            }
        }
        return count;
    }
};
int main()
{
    cout<<"size"<<endl;
     int n;
     cin>>n;
     int t=n;
     vector<int> num1;
     vector<int> num2;
     cout<<endl<<"First list";
     while(n>0)
     {
        n--;
        int x;
        cin>>x;
        num1.push_back(x);

     }
     cout<<endl<<"second list";
     while (t > 0)
     {
        t--;
         int x;
         cin >> x;
         num2.push_back(x);
     }
     Solution input;
     cout<<input.findLength(num1,num2);

return 0;
}