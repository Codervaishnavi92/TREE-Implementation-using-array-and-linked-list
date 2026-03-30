#include<iostream>
using namespace std;
int complete_node = 15;
char tree[] = {'\0','D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

int get_left_child(int index)
{
   return index;
}
int get_right_child(int index)
{
   
}
void preorder(int index)
{
    
}

void postorder(int index)
{
    
}

void inorder(int index)
{
    if(index>0 && tree[index]!='\0')
    {
        inorder(get_left_child(index));
        printf("%c ", tree[index]);
        inorder(get_right_child(index));
    } 
    
}

int main() // Driver Code
{
    cout<<"\nPreorder: \n ";
    preorder(1);
    cout <<"\nPostorder: \n";
    postorder(1);
    cout<<"\nInorder: \n";
    inorder(1);
    cout <<"\n";
    return 0;
}