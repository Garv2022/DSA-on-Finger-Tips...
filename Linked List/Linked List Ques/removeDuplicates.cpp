#include <bits/stdc++.h>
using namespace std;

//sorted linked list
Node * uniqueSortedList(Node * head) {
    // Write your code here.
            if(head == NULL)
        {
            return NULL;
        }

        //non-empty list
        Node* curr =head;

        while(curr!= NULL)
        {
            if( (curr->next != NULL) && curr->data == curr->next->data)
            {
                Node* next_next = curr->next->next;
                Node* nodeToDelete = curr->next;
                delete(nodeToDelete);
                curr->next = next_next;
            }
            else //not equal
            {
                curr=curr->next;
            }          
        }
        return head;
}

//unsorted linked list (sahi ni hai poora soln)
Node *removeDuplicates(Node *head)
{
    // Write your code here
    if(head == NULL)
    {
        return NULL;
    }

    Node* curr= head;
    while(curr!=NULL)
    {
        Node* temp =head;

        while(temp != NULL)
        {
            if(curr->data == temp->data)
            {
                Node* next_node = temp->next;
                Node* nodeToDelete = temp;
                delete(nodeToDelete);
                temp = next_node; 
            }
            else //not equal
            {
                temp=temp->next;
            }
        }
        return head;
    }
}

//unsorted linked list : approach 2


