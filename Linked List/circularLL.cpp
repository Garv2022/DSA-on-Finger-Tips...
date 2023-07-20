#include <bits/stdc++.h>
using namespace std;
int main()
{
    class Node
    {
        public:
        int data;
        Node* next;

        //consructor
        Node(int d)
        {
            this->data = d;
            this->next = NULL;

        }

        ~Node()
        {
            int value = this->data;
            if(this->next != NULL)
            {
                delete node;
                next = NULL;
            }
            cout<<"memory is free for node with data"<<value<<endl;
        }
    }
};

void insertNode(Node* &tail, int element, int d )
{
    //assuming elemnt is present in the list

    //empty list
    if(tail==NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode
    }
    else
    {
        //non empty 
        //assuming element is present in the list
        Node xurr = tail;

        while(curr->data != element)
        {
            curr= curr->next;
        }

        //element  found -> curr is representing element  wala node
        Node* temp = new Nose(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

//printing CLL
void print(Node* tail )
{
    Node* temp = tail;
    
    /*cout<<tail->data<<" ";
    while(tail->next != temp)
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    cout<< " ";*/

    //empty list
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail != temp)

}

//Deletion
void deleteNode(Node* &tail, int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"list is empty, check again"<<endl;
    }
    else
    {
        //non- empty

        //assuming that "val" is present in the LInked list
        Node* prev= tail;
        Node* curr= prev-> next;

        while(curr->data!=value)
        {
            prev = curr;
            curr = curr->next;

        }

        prev->next = curr->next;

        //1 node linked list
        if(curr=prev)
        {
            tail=NULL;
        }

        //>=2 Node Linkned List
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
 
int main()
{
    
    Node *tail = NULL;
    insertNode(tail, 5,3);
    print(tail);
    insertNode(tail, 33, 5);
    
    
    return 0;

}