#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<TreeNode *> generateTrees(int n)
    {
        if (n == 0)
            return vector<TreeNode *>();

        return constructTrees(1, n);
    }

    vector<TreeNode *> constructTrees(int start, int end)
    {
        vector<TreeNode *> list;
        if (start > end)
        {
            list.push_back(nullptr);
            return list;
        }
        for (int i = start; i <= end; i++)
        {
            vector<TreeNode *> leftSubtrees = constructTrees(start, i - 1);
            vector<TreeNode *> rightSubtrees = constructTrees(i + 1, end);
            for (TreeNode *left : leftSubtrees)
            {
                for (TreeNode *right : rightSubtrees)
                {
                    TreeNode *node = new TreeNode(i);
                    node->left = left;
                    node->right = right;
                    list.push_back(node);
                }
            }
        }
        return list;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    s.generateTrees(n);
    return 0;
}