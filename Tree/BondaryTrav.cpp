class Solution {
public:

    void traversalLeft(Node *root, vector<int> &ans)
    {
        if((root==NULL)||(root->left==NULL && root->right==NULL))
        {
            return;
        }
    
        ans.push_back(root->data);
        if(root->left)
           traversalLeft(root->left, ans);
        else
            traversalLeft(root->right, ans);
        
    }
    
    void traversalLeaf(Node *root, vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->data);
            return;
        }
        
        traversalLeaf(root->left,ans);
        traversalLeaf(root->right,ans);
        
    }
    
    void traverseRight(Node* root, vector<int> &ans)
    {
        //base case
        if((root==NULL)||(root->left==NULL && root->right==NULL))
        {
            return;
        }
        
        if(root->right)
        {
            traverseRight(root->right,ans);
        }
        else
        {
            traverseRight(root->left,ans);
        }
        
        //wapas aagaye
        ans.push_back(root->data);
        
        
    }
    
    vector <int> boundary(Node *root)
    {
       vector<int> ans;
       if(root==NULL)
       {
           return ans;
       }
       
       ans.push_back(root->data);
       
       //left part print /store
       traversalLeft(root->left, ans);
       
       //traverse leaf nodes
       
       //left subtree
       traversalLeaf(root->left,ans);
       
       //right subtree
       traversalLeaf(root->right,ans);
       
       //traverse right part
       traverseRight(root->right,ans);
       
       return ans;
    }
};