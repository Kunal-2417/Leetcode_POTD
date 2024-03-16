#include<bits/stdc++.h>
using namespace std;

#define ll long long
class Solution
{
public:
    vector<int> numsSameConsecDiff(int n, int k)
    {
        vector<int> v;
        // for(int i=1;i<=9;i++)
        //     {
        //         for(int j=0;j<=9;j++)
        //         {
        //             if(abs(i-j)==k)
        //             {
        //                 int a = 0;
        //                 int x=0;
        //                 // cout<<i<<j<<endl;
        //                 for(int q=n-1;q>0;q--)
        //                 { 
        //                     if(x==0){
        //                         a = a + (i * (pow(10,q)+1e-9));
        //                         x=1;
        //                     }
        //                     else
        //                     {
        //                         a = a + (j * (pow(10,q)+1e-9));
        //                         x=0;
        //                     }   
        //                 }
        //                 if (x == 0)
        //                 {
        //                     a+=i;
        //                 }
        //                 else
        //                 {
        //                     a+=j;
        //                 }
        //                 v.push_back(a);
                        
                        
        //             }
        //         }
        //     }
        // int count=0;
        // while(n>=1)
        // {
        //     n=n/10;
        //     count++;
        // }
        int i = (pow(10, n - 1)+1e-9);
        int t = 0;
        for (int q = n - 1; q >= 0; q--)
        {
            t = t + (9 * (pow(10, q) + 1e-9));
        }
        int x=0;
        for(int o=i;o<=t;o++)
        {
            int a[n];
            while(o>=1)
            {
                a[x]=o%10;
                cout<<a[x];
                x++;
            }
            int arr[x];
            for(int j=0;j<x;j++)
            {
                arr[j]=abs(a[j]-a[j+1]);
            }
            int p;
            for(int l=0;l<x-1;l++)
            {
                if(arr[l]==arr[l+1])
                {
                    p=0;
                }
            }
            if(p==0)
            {
                v.push_back(i);
            }
            x=0;
        }

        return v;
    }
};
int main()
{
     int n;
     int k;
     cin>>n>>k;
     Solution s;
     
     vector<int> p = s.numsSameConsecDiff(n, k);
    for(auto it=p.begin();it!=p.end();++it)
    {
            cout<<*it<<endl;
    }
     return 0;
}