#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node *left;
        node *right;
    
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();  

        if(temp == NULL) // purana lvl completely traversed
        {
            cout<<endl;
            if(q.empty())//queue still has some child nodes
            {
                q.push(NULL);
            }
        }  

        else
        {                 
            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }            
 
    }
    
}

node* buildTree(node *root)
{
     cout<<"enter the data:"<<endl;
     int data;
     cin>>data;
     root = new node(data);

     if(data == -1)
     {
        return NULL;
     }

     cout<<"enter data for inserting in left"<<endl;
     root->left = buildTree(root->left);
     cout<<"enter data for inserting in right"<<endl;
     root->right = buildTree(root->right);
     return root;
}

void inOrder(node* root)
{
    //base case
    if(root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root)
{
    //base case
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);    
}

void postOrder(node* root)
{
    //base case
    if(root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//level order se tree bana rahe hai
void buildFromLevelOrder(node* &root) 
{
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for:"<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!= -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        
        cout<<"enter right node for:"<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!= -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}

int main()
{
    node* root = NULL;

    //creating a Tree
    root = buildTree(root);

    //level order
    levelOrderTraversal(root->left);

    //tree milega re from level order
    buildFromLevelOrder(root); 



}
