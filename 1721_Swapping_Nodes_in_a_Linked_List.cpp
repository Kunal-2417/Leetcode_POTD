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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *temp = head;
        int count = 0;
        while (temp->next != nullptr)
        {
            count++;
            temp = temp->next;
        }
        count++;
        temp=head;
        for (int i = 1; i < k-1; i++)
        {
            temp=temp->next;
            /* code */
        }
        // cout<<temp->val<<endl;
        
        ListNode *temp2=head;
        for(int i=0;i<count-k-1;i++)
        {
            temp2=temp2->next;
        }
        // cout<<temp2->val<<endl;
        ListNode *key2=temp2->next->next;
        ListNode *key1=temp->next;
        temp->next=temp2->next;
        temp2->next->next=key1->next;
        temp2->next=key1;
        key1->next=key2;
        delete[] temp;
        delete[] temp2;
        delete[] key1;
        delete[] key2;
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
    int k;
    cin >> k;
    head = s.swapNodes(head, k);
    printAllNode(head);

    return 0;
}