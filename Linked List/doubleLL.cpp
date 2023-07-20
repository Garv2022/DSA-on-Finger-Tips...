#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;

    }

    //destructor
    ~Node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;                   
        }
        //memory is free for node with data
    }
};


//traversing Lindked List
void print(Node* head)
{
    Node* temp=head;

    while(temp!=head)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}


//gives length of linked list
int getLength(Node* head)
{
    int cnt=0;
    Node* temp=head;

    while(temp!=head)
    {
        cout<<temp->data;
        cnt++;
        temp=temp->next;
    }
    return cnt;    
}


//insert at First Position
void insertAtHead(Node* &head, int d)
{
    if(head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
    }
    else
    {
        Node* temp=new Node(d);
        temp->next=head;
        head->next=temp;
        head=temp;        
    }
}


//inset at Last Position
void insertAtTail(Node* &tail, Node* &head, int d)
{
    if(head==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else
    {
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}


//Insert at any position
void insertAtPosition(Node* &head, Node* &tail, int position,int d)
{
    //insert at Start
    if(position==1)
    {
        insertAtHead(head, d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }

    //inserting at last position 
    if(temp->next==NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert=new Node(d);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}


//deletion of an element
void deleteNode(int position,Node* &head)
{
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;   
    }
    else
    {
        //deleting any node middle or last
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++; 
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    /*Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;*/

    print(head);
    //cout<<getLength(head)<<endl;

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 1231);
    print(head);

    insertAtTail(tail, head, 200);
    print(head);

    insertAtPosition(head, tail, 2, 3000);
    print(head);

    insertAtPosition(head, tail, 7, 102);
    print(head);

    deleteNode(1, head);
    print(head);
    return 0;
}