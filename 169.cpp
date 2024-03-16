#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int,int> m;
        for (auto i : nums){
            if (!m[i])
            ++m[i];
            else
            --m[i];
            }
            return *max_element(begin(m),end(m));
    }
};
int main()
{

    vector<int> v = {3, 0, 1};
    Solution s;
    cout << s.majorityElement(v);
    return 0;
}