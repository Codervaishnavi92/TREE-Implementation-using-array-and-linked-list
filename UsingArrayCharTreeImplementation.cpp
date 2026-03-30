#include<stdio.h>
#include <iostream>

using namespace std;
int complete_node = 15;
/*

             D
          /    \
         /      \
        /        \
       A           F
      / \         / \    
     /   \       /   \
    E     B     R     T
   / \         /     / \
  G   Q       V     J   L
*/

// array to store the tree
char tree[] = {'\0','D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

int get_left_child(int index)
{	
   return 2*index;
}
int get_right_child(int index)
{
   return 2*index+1;
}
void preorder(int index)
{
    if(index>0 && tree[index]!='\0' && index<sizeof(tree))
    {
    cout<<tree[index]<<" ";
    preorder(get_left_child(index));
	preorder(get_right_child(index));
    }
}

void postorder(int index)
{
    if(index>0 && tree[index]!='\0'  && index<sizeof(tree))
    {
    postorder(get_left_child(index));
	postorder(get_right_child(index));
	cout<<tree[index]<<" ";
    }
    
}

void inorder(int index)
{
    // checking for valid index and null node
    if(index>0 && tree[index]!='\0'  && index<sizeof(tree))
    {
    inorder(get_left_child(index));
	cout<<tree[index]<<" ";
	inorder(get_right_child(index));
    }
    
}

int main() // Driver Code
{
    printf("Preorder:\n");
    preorder(1);
    printf("\nPostorder:\n");
    postorder(1);
    printf("\nInorder:\n");
    inorder(1);
    printf("\n");
    return 0;
}