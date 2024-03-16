#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    // vector<vector<int>> ans;
    
    
    int threeSumClosest(vector<int> &nums, int target)
    {
        int x;
        x = nums.size();
        int arr[x];
        int i = 0;
        set<vector<int>> final;

        vector<int> k;
        while (x > 0)
        {
            x--;

            arr[i] = nums[i];

            i++;
        }

        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);

        int l, r;
        int count = 0;
        int arr2[n-2];
        for (int i = 0; i < n - 2; i++)
        {
            int l=0;
            l = i + 1;

            r = n - 1;
            while (l < r)
            {


                if (arr[i] + arr[l] + arr[r] == target)
                {
                    // cout<< arr[i]<<arr[l]<< arr[r];
                    // cout<<endl;
                    k.push_back(arr[i]);
                    k.push_back(arr[l]);
                    k.push_back(arr[r]);
                    final.insert(k);
                    k.pop_back();
                    k.pop_back();
                    k.pop_back();
                    count++;
                    cout<<count<<endl;
                    r--;
                }
                else if (arr[i] + arr[l] + arr[r] < target)
                    l++;
                else
                    r--;
            }
        }
        return count;
    }
};
int main()
{
    int t;
    cin >> t;
    vector<int> input;
    while (t > 0)
    {
        t--;
        int x;
        cin >> x;
        input.push_back(x);
    }
    Solution s;
    int no;
    cin>>no;
    // s.threeSum(input,x
    s.threeSumClosest(input,no);
    // return 0;
}