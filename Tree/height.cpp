class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        
        //base case
        if(node == NULL)
        {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        
        int height = max(left, right)+1;
        return height;
        
    };