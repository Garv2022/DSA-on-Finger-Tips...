#include <bits/stdc++.h>
using namespace std;

//approach :1

void reverse(Node *head,Node* )
{
    //base case
    if(curr==NULL)
    {
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr-> next = prev;


}

Node* func(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    reverse(head, curr, prev);
    return head;

}

//approach :2

Node* reverseLinkdedList(Node *head)
{
    
   if(head==NULL||head->next==NULL)
   {
        return head;
   }  

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
    while(curr != NULL)
    {
        forward= curr->next;
        curr->next= prev;
        prev = curr;
        curr = forward;
    }
    
    return prev;

}

//approach :3

Node* reverse1(Node* head)
{
    //base case
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    int chotaHead = reverse1(head->next);

    head->next->next = head;
    head->next= NULL;
    return chotaHead;

}