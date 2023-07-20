#include <bits/stdc++.h>
using namespace std;

//approach 1:
Node* sortList1(Node *head)
{
    // Write your code here.
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp!= NULL)
    {
        if(temp->data == 0)
        {
            zeroCount++;
        }
        else if(temp->data == 1)
        {
            oneCount++;
        }
        else if(temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }

    temp =head;
    while(temp!=NULL)
    {
        if(zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0)
        {
            temp->data =2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;


//approach 2:

void daalde(Node* &tail, Node* curr) //insert tail
{
    tail->next = curr;
    tail = curr;
}

Node* sortList2(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr= head;

    //create separate list of 0s, 1s and 2s.
    while(curr!=NULL)
    {
        int value = curr->data;

        if(value == 0)
        {
            daalde(zeroTail, curr);
        }
        else if(value == 1)
        {
            daalde(oneTail, curr);
        }
        else if(value == 2)
        {
            daalde(twoTail, curr);
        }
        curr = curr->next;
    }

    //merge 3 sub lists

    //1s list non empty
    if(oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next
    }
    else //1s list is empty
    {
        zeroTail->next = twoHead->next
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    
    //setup head
    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
}