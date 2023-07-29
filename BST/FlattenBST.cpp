void inorder(TreeNode<int>* root, vector<int>  &in)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
 
TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inOrderVal;
    
    inorder(root, inOrderVal);
    int n= inOrderVal.size();

    TreeNode<int>*  newRoot = new TreeNode<int>(inOrderVal[0]);
    TreeNode<int>* curr = newRoot;

    //2nd Step
    for(int i=1; i<n;i++)
    {
        TreeNode<int>* temp = new TreeNode<int>(inOrderVal[i]);
        curr->left =  NULL;
        curr->right = temp;
        curr = temp;
    }

    //3rd step
    curr->left=NULL;
    curr->right =NULL;

    return newRoot;
}