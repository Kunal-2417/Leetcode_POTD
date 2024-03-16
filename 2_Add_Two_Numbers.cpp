#include <bits/stdc++.h>
using namespace std;
#define ll long long
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int value) // constructor
    {
        val = value;
        next = NULL;
    }
};
class Solution
{
public:
    long long int sum1=0;
    long long int sum2=0;
    void insertAtTail(ListNode *&head, int value)
    {
        ListNode *n = new ListNode(value);
        if (head == NULL)
        {
            head = n;
            return;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp = l1;
        int find=0;
        while (temp != NULL)
        {
            sum1=sum1*10+(temp->val);
            if(sum1==0)
            {
                find++;
            }
            temp = temp->next;
        }
            // cout<<find<<endl;
            int carry=1;
            int count=find;
            while(count>0)
            {
                carry*=10;
                count--;
            }
            // cout<<carry<<endl;
       long long  int key = 0;
        while (sum1 >= 1)
        {
            key = key * 10 + sum1 % 10;
            sum1 = sum1 / 10;
        }
        // cout<<key<<endl;
        if(find>0)
        {
            key = key * carry;
        }
        sum1 = key;
        // cout << sum1 << endl; // 6 7 8 0 8 5 8 9 7   0 8 6 5 6 8 3 5 7
        ListNode *temp2 = l2;
        int find2=0;
        while (temp2 != NULL)
        {
            // cout << temp->val << " ";
            sum2 = sum2 * 10 + (temp2->val);
            if(sum2==0)
            {
                find2++;
            }
            temp2 = temp2->next;
        }
        // cout<<find2<<endl;
        carry=1;
        int count2=find2;
        while(count2)
        {
            carry*=10;
            count2--;
        }
        // cout<<sum2<<endl;
        long long int k=0;
        while(sum2>=1)
        {
            k=k*10+sum2%10;
            sum2=sum2/10;
        }
        if (find2 >0)
        {
            k = k * carry;
        }
        sum2=k;
        // cout<<sum2<<endl;
        long long int ans=sum1+sum2;
        // if (ans == 0)
        // {
        //     ListNode *head3 = NULL;
        //     insertAtTail(head3, 0);

        //     return head3;
        // }
    //    cout<<ans<<endl;
        ListNode *head3 = NULL;
        while(ans>=1)
        {
            int k;
            k=ans%10;
            ans=ans/10;
            insertAtTail(head3,k);
        }
        return head3;
    }
};
void insertAtTail(ListNode *&head, int value)
{
    ListNode *n = new ListNode(value);
    if (head == NULL)
    {
        head = n;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void InsertAtHead(ListNode *&head, int value)
{
    ListNode *n = new ListNode(value);
    n->next = head;
    head = n;
}
void Deletion(ListNode *&head, int value)
{
    ListNode *temp = head;
    while (temp->next->val != value)
    {
        temp = temp->next;
    }
}
int main()
{
    ListNode *head1 = NULL;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head1, x);
    }
    display(head1);


    ListNode *head2 = NULL;
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        int p;
        cin >> p;
        insertAtTail(head2, p);
    }
    display(head2);
    Solution s;
    ListNode*head3=NULL;
    head3=s.addTwoNumbers(head1,head2);
    display(head3);
        return 0;
}


