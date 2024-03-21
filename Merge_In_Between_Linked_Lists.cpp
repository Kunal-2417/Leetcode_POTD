#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){} 
    ListNode(int x, ListNode *next) : val(x), next(next){}
                                                                                                                                      *
};
class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        for (int i = 1; i < a; i++)
        {
            temp1=temp1->next;
        }
        temp1->next=temp2;
        while (b>=0)
        {
            b--;
            list1=list1->next;
        }
        temp2=temp1;
        while(temp2->next==NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=list1;
        return temp1;
        
        

    }
};
int main()
{
     
return 0;
}