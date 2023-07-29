void inorder(BinaryTreeNode<int>* root, vector<int>  &in)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inOrderVal;
    inorder(root, inOrderVal);

    int i=0, j= inOrderVal.size()-1;

    while(i<j)
    {
        int sum = inOrderVal[i] + inOrderVal[j];
        if(sum == target)
        {
            return true;
        }
        if(sum > target)
        {
            j--;
        }
        if(target > sum )
        {
            i++;
        }
    }
    return false;
}