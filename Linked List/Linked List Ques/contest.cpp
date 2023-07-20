/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:

    ListNode* reverse(ListNode* head)
    {
        if(head->next == 0)
        {
            return head;
        }
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(curr != NULL)
        {
            next= curr->next;
            curr->next= prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(struct ListNode* &head,struct ListNode* &tail,int val)
    {
        ListNode* temp =new Node(val);
        
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
    
    
    ListNode* add(ListNode* l1, ListNode* l2)
    {
        int carry=0;
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        while(l1!=NULL || l2!= NULL || carry!=0)
        {
            
            int val2=0;
            if(l1!=NULL)
                val2=l1->val;
            
            int val2=0;
            if(l2!=NULL)
                val2=l2->val;
            
            
            int sum = carry + val2 +val2;
            int digit = sum%10;
        
            //create node and add in answer LL
            insertAtTail(ansHead, ansTail, digit);         
            
            carry = sum/10;
            if(l1 != NULL)
                l1=l1->next;
            if(l2 != NULL)
                l2=l2->next;
        }
        return ansHead;
    }
   
public:
    ListListNode* addTwoNumbers(ListListNode* l2, ListListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        //Step 2: add 2 LL
        ListNode* ans = add(l1, l2);
        
        //
        ans = reverse(ans);
        
        return ans;

    }
};