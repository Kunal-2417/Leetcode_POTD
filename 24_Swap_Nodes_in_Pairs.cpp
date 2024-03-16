#include <bits/stdc++.h>
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
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        ListNode *key1=head;
        if (head == nullptr)
        {
            return head;
        }
        if (head->next == nullptr)
        {
            return head;
        }
        while (temp->next != nullptr)
        {
            count++;
            temp = temp->next;
        }
        count++;
        ListNode *key2=head->next;
        for (int i = 0; i < count/2; i++)
        {
            swap(key1->val,key2->val);
            if(key2->next!=nullptr)
            {
            key2=key2->next->next;
            key1=key1->next->next;

            }

        }
        return head;
    }
};

ListNode *inputNode(ListNode *&head, int key)
{
    ListNode *temp = new ListNode(key);
    if (head->val == 0)
    {
        head = temp;
        return head;
    }
    ListNode *tr = head;
    while (tr->next != nullptr)
    {
        tr = tr->next;
    }
    tr->next = temp;

    return head;
}

void printAllNode(ListNode *head)
{

    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // how to take input in Node at tail?
    ListNode *head = new ListNode();
    for (int i = 0; i < 5; i++)
    {
        int key;
        cin >> key;
        head = inputNode(head, key);
    }
    printAllNode(head);

    Solution s;

    head = s.swapPairs(head);
    
    printAllNode(head);

    return 0;
}