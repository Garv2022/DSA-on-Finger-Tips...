#include <bits/stdc++.h>
using namespace std;

ListNode* kReverse(ListNode* head, int k)
{
    //base call
    if(head==NULL)
    {
        return NULL;
    }

    //step:1 reverse frist k nodes
    ListNode* next = NULL;
    ListNode* currr=head;
    ListNode* prev=NULL;
    int count=0;

    while(curr!=NULL && count<k)
    {
        next= curr->next;
        curr->next=prev;
        prev= curr;
        curr=next;
        count++;
    }

    //Step 2: Recursion Dekh Lega
    if(next!=NULL)
    {
        head->next = kReverse(next,k);
    }

    //Step:3 return head of reversed list
    return prev;
}