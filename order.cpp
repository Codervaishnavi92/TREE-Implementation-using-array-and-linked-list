#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* newNode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Inorder Traversal 
void inorder(node* root)
{
    if(root == NULL)
    return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal 
void preorder(node* root)
{
    if(root == NULL){
	
    return;
}
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
   
}

// Postorder Traversal 
void postorder(node* root)
{
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() // Driver Code
{
	struct node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	cout<<"Tree is created Successfully !! \n";
	cout<<"\n Inorder -  !! \n";
	inorder(root);
	cout<<"\n Preorder -  !! \n";
	preorder(root);
	cout<<"\n Postorder -  !! \n";
	postorder(root);
	return 0;
}