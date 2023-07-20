#include <bits/stdc++.h>
using namespace std;



/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/



Node<int>* solve(Node<int>* first, Node<int>* second)
{
    //if only 1 element is present in first LL
    if(first->next == NULL)
    {
        first->next=second;
        return first;
    }
    
    Node<int>* curr1 = first;
    Node<int>* next1 =curr1->next;
    Node<int>* curr2= second;
    Node<int>* next2 =curr2->next;

    while(curr2 != NULL && next1 != NULL)
    {
        if((curr2->data >= curr1->data)&& (next1->data > curr2->data))
        {
             // add node between 2 nodes in first list
             curr1->next = curr2;
             next2 = curr2->next;
             curr2->next = next1;

             //update pointer
             curr1 = curr2;
             curr2 = next2;


        }
        else
        {
            //curr1 aur next1 ko aage badhao
            curr1 = next1;
            next1 = next1->next;

            //agar first list kahtam ho gyi
            if(next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
       return first;    

}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
    {
        return second;
    }

    if(second == NULL)
    {
        return first;
    }

    //pehla element dekhle kiska chota hai usko first list maan le
    if(first->data<= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }

}
