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


 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *temp=head;
       int count=0;
       while(temp->next!=nullptr)
       {
        count++;
        temp=temp->next;
       }
         count++;
       temp=head;
         if (count==n)
         {
                head=head->next;
                return head;
         } 
         for (int i = 0; i < count-n-1; i++)
         {
                temp=temp->next;


         }
            temp->next=temp->next->next;
            return head;
    }
}; 

ListNode* inputNode(ListNode* &head,int key)
{
    ListNode* temp=new ListNode(key);
    if (head->val==0)
    {
        head = temp;
        return head;
    }
    ListNode * tr =head;
    while(tr->next!=nullptr)
    {
        tr=tr->next;
    }
    tr->next=temp;

    return head;

}

void printAllNode(ListNode* head)
{
    
    ListNode* temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    //how to take input in Node at tail?
    ListNode *head=new ListNode();
    for (int i = 0; i < 5; i++)
    {
    int key;
    cin>>key;
    head=inputNode(head,key);
    }
    printAllNode(head);
    
    Solution s;

    s.removeNthFromEnd(head,1);
     
return 0;
}