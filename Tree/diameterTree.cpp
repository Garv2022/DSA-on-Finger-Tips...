class Solution {
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
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        if(root==NULL)
        {
            return 0;
        }
        
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + 1 + height(root->right);
        
        int ans = max(op1, max(op2,op3));
        return ans;
    }
};

//Approach 2:




