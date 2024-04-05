#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev=NULL;
        ListNode* current=head;
        ListNode* nex=head->next;
        while (current != NULL)
        {
            current->next = prev;
            prev=current;
            current=nex;
            if(nex!=NULL)
            {
                nex=nex->next;
            }
        }
        return prev;
    }
};
int main()
{
     
return 0;
}