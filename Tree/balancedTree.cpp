#include <iostream>
using namespace std;

//Approach 1: T.C. 0(N^2)
class Solution{
    private:
          int height(Node* root){
        // code here 
        
        //base case
        if(root == NULL)
        {
            return 0;
        }
        
        int left = height(root->left);
        int right = height(root->right); 
        
        int height = max(left, right)+1;
        return height;
        
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        {
            return true;
        }
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        
        bool diff = abs(height(root->left)-height(root->right)) <=1 ;
        
        if(left && right && diff)
        {
            return 1;
        }
        else
        {
            return false;
        }
    }
};


//Approach 2: T.C. 0(N)
class Solution{

    public:
    //Function to check whether a binary tree is balanced or not.
    pair<int, int> isBalancedFast(Node *root)
    {
        //base case
        if(root==NULL)
        {
            pair<bool, int>p = make_pair(true,0);
            return p;
        }
        
        pair<int,int> left = isBalancedFast(root->left);
        pair<int,int> right = isBalancedFast(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs(left.second-right.second) <=1 ;
        
        pair<bool,int>ans;
        ans.second = max(left.second, right.second)+1;
        
        if(leftAns && rightAns && diff)
        {
           ans.first=true;
        }
        else
        {
            ans.first=false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
};

