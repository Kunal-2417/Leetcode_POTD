#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
     vector<int> prices;
     prices.push_back(1);
     prices.push_back(2);
     prices.push_back(3);
     prices.push_back(0);
     prices.push_back(2);
    //  prices.push_back(4);
    
     int diff[prices.size() - 1];
     for (int i = 0; i < prices.size() - 1; i++)
         diff[i] = prices[i + 1] - prices[i];
     int max_diff = diff[0];
     for (int i = 1; i < prices.size() - 1; i++)
     {
         if (diff[i - 1] > 0)
             diff[i] += diff[i - 1];
         if (max_diff < diff[i])
             max_diff = diff[i];
     }
     if(max_diff<0)
     {
        return 0;
     }
     else
     {
     cout<< max_diff;

     }

     return 0;
}