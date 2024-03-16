#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next){}
};

ListNode *createLinkedList()
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    ListNode *head = nullptr;
    ListNode *prev = nullptr;

    for (int i = 0; i < n; ++i)
    {
        int val;
        std::cout << "Enter value for node " << i + 1 << ": ";
        std::cin >> val;

        ListNode *newNode = new ListNode(val);

        if (prev)
        {
            prev->next = newNode;
        }
        else
        {
            head = newNode;
        }

        prev = newNode;
    }

    return head;
}

class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {

        ListNode *first_head=nullptr;
        if(head==nullptr)
        {
            return nullptr;
        }
        ListNode *first_tail = nullptr;

        ListNode *second_head = nullptr;
        ListNode *second_tail = nullptr;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            ListNode *newNode = new ListNode(temp->val);
            if(temp->val<x)
            {
                if (first_tail)
                {
                    first_tail->next = newNode;
                }
                else
                {
                    first_head = newNode;
                }
                first_tail = newNode;
            }
            else
            {
                if(second_tail)
                {
                    second_tail->next=newNode;
                }
                else{
                    second_head=newNode;
                }
                second_tail=newNode;
            }
            temp=temp->next;
        }
        if(first_head==nullptr)
        {
            return second_head;
        }
        first_tail->next=second_head;
        return first_head;
    }
};
int main()
{
    ListNode *head = createLinkedList();
    Solution S;
    int x;cin>>x;
    cout<<S.partition(head,x);     
return 0;
}