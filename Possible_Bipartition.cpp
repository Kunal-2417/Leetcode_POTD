#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    bool possibleBipartition(int n, vector<vector<int>> &dislikes)
    {

    }
};
int main()
{
    Solution s;
    vector<vector<int>> v;
    vector<int> t;
    t.push_back(1);
    t.push_back(2);
    v.push_back(t);
    t.pop_back();
    t.pop_back();
    t.push_back(1);
    t.push_back(3);
    v.push_back(t);
    t.pop_back();
    t.pop_back();
    t.push_back(2);
    t.push_back(4);
    v.push_back(t);
    t.pop_back();
    t.pop_back();
    if(s.possibleBipartition(4,v)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"fasle"<<endl;
    }

    return 0;
}