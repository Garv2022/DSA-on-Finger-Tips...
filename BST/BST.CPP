#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
    
        Node(int d)
        {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
}

void insertIntoBst(Node* &root,int d)
{
    //base case
    if(root == NULL)
    {
        root = new Node(d);
        return;
    }

    if(d>root->data)
    {
        root->right = insertIntoBst(root->right, d);
    }
    else
    {
        root->left = insertIntoBst(root->left, d);
    }
    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data != -1)
    {
        insertIntoBst(root, data);
        cin>> data;
    }
}


//Deletion
Node* deleteFromBST(Node* root, int val)
{
    //base case
    if(root==NULL)
    {
        return root;
    }

    if(root->data == val)
    {
        //0 child
        if(root->left==NULL && root->right==NULL)
        {
            return NULL;
        }

        //1 child
        if(root->left!=NULL && root->right==NULL)
        {
            Node* temp= root->left;
            delete root;
            return temp
        }

        if(root->left==NULL && root->right!=NULL)
        {
            Node* temp= root->right;
            delete root;
            return temp
        }

        //2 child
        if(root->left!=NULL && root->right!=NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
        }

    }
    else if(root->data > val)
    {
        root->left = deleteFromBST(root->left,val);
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
    }
}
int main()
{
    Node* root = NULL;

    takeinput(root);

    return 0;
}