#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (!head || left == right)
        {
            return head; // Nothing to reverse or invalid input
        }

        // Create a dummy node to simplify the logic
        ListNode dummy(0);
        dummy.next = head;
        ListNode *pre = &dummy;

        // Move pre to the node just before the left position
        for (int i = 1; i < left; ++i)
        {
            pre = pre->next;
        }

        // Initialize pointers for the reversal process
        ListNode *cur = pre->next;
        ListNode *next = nullptr;

        // Reverse the sublist from left to right
        for (int i = left; i < right; ++i)
        {
            next = cur->next;
            cur->next = next->next;
            next->next = pre->next;
            pre->next = next;
        }

        return dummy.next;
    }
};
int main()
{
     
return 0;
}