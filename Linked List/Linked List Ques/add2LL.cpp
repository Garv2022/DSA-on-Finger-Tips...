#include <bits/stdc++.h>
using namespace std;


//replacing extra loops :optimised solution
class Solution
{
    private:
    
        Node* reverse(Node* head)
        {
            if(head->next == 0)
            {
                return head;
            }
            
            Node* curr=head;
            Node* prev=NULL;
            Node* next=NULL;
            
            while(curr != NULL)
            {
                next= curr->next;
                curr->next= prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    
        void insertAtTail(struct Node* &head,struct Node* &tail,int val)
        {
            Node* temp =new Node(val);
            
            //empty list
            if(head == NULL)
            {
                head = temp;
                tail = temp;
                return;
            }
            else
            {
                tail ->next = temp;
                tail = temp; 
            }
        }    
        
        
        Node* add(Node* first, Node* second)
        {
            int carry=0;
            Node* ansHead=NULL;
            Node* ansTail=NULL;
            while(first!=NULL || second!= NULL || carry!=0)
            {
                
                int val1=0;
                if(first!=NULL)
                    val1=first->data;
                
                int val2=0;
                if(second!=NULL)
                    val2=second->data;
                
                
                int sum = carry + val1 +val2;
                int digit = sum%10;
            
                //create node and add in answer LL
                insertAtTail(ansHead, ansTail, digit);         
                
                carry = sum/10;
                if(first != NULL)
                    first=first->next;
                if(second != NULL)
                    second=second->next;
            }
            return ansHead;
        }
    
    
    public:
    //Function to add two numbers represented by linked list.

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        //step 1. Reverse LL
        first = reverse(first);
        second = reverse(second);
        
        //Step 2: add 2 LL
        Node* ans = add(first, second);
        
        //
        ans = reverse(ans);
        
        return ans;
        
    }



class Solution
{
    private:
    
        Node* reverse(Node* head)
        {
            if(head->next == 0)
            {
                return head;
            }
            
            Node* curr=head;
            Node* prev=NULL;
            Node* next=NULL;
            
            while(curr != NULL)
            {
                next= curr->next;
                curr->next= prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    
        void insertAtTail(struct Node* &head,struct Node* &tail,int val)
        {
            Node* temp =new Node(val);
            
            //empty list
            if(head == NULL)
            {
                head = temp;
                tail = temp;
                return;
            }
            else
            {
                tail ->next = temp;
                tail = temp; 
            }
        }    
        
        
        Node* add(Node* first, Node* second)
        {
            int carry=0;
            Node* ansHead=NULL;
            Node* ansTail=NULL;
            while(first!=NULL && second!= NULL)
            {
                
                int sum = carry + first->data + second->data;
                int digit = sum%10;
            
                //create node and add in answer LL
                insertAtTail(ansHead, ansTail, digit);         
                
                carry = sum/10;
                first=first->next;
                second=second->next;
            }
            
            //1st LL non -empty
            while(first!= NULL)
            {
                int sum = carry + first->data;
                int digit = sum%10;
                insertAtTail(ansHead, ansTail, digit); 
                carry = sum/10;
                first=first->next;
            }
            
            //2nd LL non -empty
            while(second!= NULL)
            {
                int sum = carry + second->data;
                int digit = sum%10;
                insertAtTail(ansHead, ansTail, digit); 
                carry = sum/10;
                second=second->next;
            }
            
            while(carry!= 0)
            {
                int sum = carry;
                int digit = sum%10;
                insertAtTail(ansHead, ansTail, digit); 
                carry = sum/10;
            }
            return ansHead;
        }
    
    
    public:
    //Function to add two numbers represented by linked list.

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        //step 1. Reverse LL
        first = reverse(first);
        second = reverse(second);
        
        //Step 2: add 2 LL
        Node* ans = add(first, second);
        
        //
        ans = reverse(ans);
        
        return ans;
        
    }
};




