#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int> arr;
        
        Node* temp = head;

        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        int s=0;
        int e=arr.size()-1;
        cout<<e;
        while(s<=e)
        {
            if(arr[s]!=arr[e])
            {
                return 0;
            }
                s++;
                e--;
        }
        return 1;
    }
};



//approach 2:
class Solution{
    
  private:
    Node* getMid(Node* head)
    {
        Node* slow= head;
        Node* fast=head->next;
        
        while(fast!= NULL && fast->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            
        }
        return slow;
    }
    
    Node* reverse(Node* head)
    {
        Node* curr = head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;           
            curr=next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    
    bool isPalindrome(Node *head)
    {
        if( head->next== NULL)
        {
            return 1;
        }
        //1. get middle node
        Node* middle =  getMid(head);
        
        //2. reverse LL after mid;
        Node* temp= middle->next;
        middle->next = reverse(temp);
    
        //3. comparing both halves
        Node* head1 =head;
        Node* head2= middle->next;
        
        while(head2 != NULL)
        {
            if(head1->data != head2->data)
            {
                return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        //4. reconstructing the LL
        temp=middle->next;
        middle->next=reverse(temp);
        
        return true;
        
        
    }
};
