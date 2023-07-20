#include <bits/stdc++.h>
using namespace std;

Node* floydDetectLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;

    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast != NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
        }

        slow=slow->next;

        if(slow == fast)
        {
            return slow;
        }       
    }
    return NULL;
}

//loop detection karlo
bool detectLoop(Node* head)
{
    if(head==NULL)
    {
        return false;
    }
    map<Node*, bool> visited;

     Node* temp= head;

     while(temp!= NULL)
     {
        
        //cycle is present
        if(visited[temp] == true)
        {
            return 1;
        }

        visited[temp] = true;
        temp = temp->next;      

     }
     return false;
}


//starting node of cycle
Node* getStartingNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    if(intersection == NULL)
    {
        return NULL;
    }
while(slow!= intersection)
    {
        slow=slow->next;
        intersection= intersection->next;


    }
    return slow;
}

//remove loop from linked list
void removeLoop(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    Node* startOfLoop = getStartingNode(head);
    Node* temp =startOfLoop;
    if(startOfLoop == NULL)
    {
        return NULL;
    }
    while(temp->next != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}