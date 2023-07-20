#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* head;

    //constructor
    Node(int data)
    {
        this -> data= data;
        this -> next= NULL;
    }

    //destructor
    ~Node()
    {
        int value= this->data;

        //memory free
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};


void InsertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    //insert at start
    if(position==1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node* temp= head;
    int cnt=1;
    while(cnt<position-1)
    { 
        temp= temp->next;
        cnt++;
    }

    //inserting in last position
    if(temp->next==NULL)
    {
        InsertAtTail(tail, d);
        return;
    }


    //creating a node for d
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp->next;
    temp->next=nodeToInsert; 

}


void InsertAtHead(Node* &head, int d)
{
    //new node create
    Node* temp= new Node(d);
    temp->next=head;
    head=temp; 
}


void InsertAtTail(Node* &tail, int d)
{
    //new node create
    Node* temp= new Node(d);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void deleteNode(int position,Node* &head)
{
    //deleting first node or start node
    if(position==1)
    {
        Node* temp=head;       
        head=head->next;
        //memory free start node ki
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //deleting any middle or last node
        Node* curr=head;
        Node* temp=NULL;

        int cnt=1;
        int prev;
        while(cnt < position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
int main()
{
    //created a new node
    Node* node1= new Node(10);

    //head pointed to node1
    Node* head= node1;
    print(head);

    //tail node create
    Node* tail=node1;

    InsertAtTail(tail, 22);
    print(head);

    InsertAtPosition(tail, head, 2, 99);
    print(head);

    deleteNode(1, head);
    print(head);

    return 0;

}