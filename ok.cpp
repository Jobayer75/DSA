//JOYADDAR MD JOBAYER
//1731833

#include<iostream>
using namespace std;

class node
{
public:
string key;
node*left;node*right;

node(string item)
   {
       key = item;
       left = right = NULL;
   }
};

class binarytree

{

 public:

      void printPostorder (node* root)

{
         if (root==NULL)
                 return ;

printPostorder(root->left);
printPostorder(root->right);
cout<<root->key<<" ";
}

void printInorder (node*root)
 
{
      if (root==NULL)
                 return ;

printInorder(root->left);
cout<<root->key<<" ";
printInorder(root->right);

}

  void printPreorder (node*root)
 
{
      if (root==NULL)
                 return ;

cout<<root->key<<" ";
printPreorder(root->left);
printPreorder(root->right);

}

};

  

       int main ()
    {
         
     binarytree t;
   
     node * root = new node("55");
     root->left = new node ("11");
      root->left->left = new node ("22");
      root->left->right = new node ("33");
      root->left->right->left = new node ("49");
      root->left->right->right = new node ("89");
      root->left->right->right->left = new node ("34");
      root->left->right->right->right = new node ("64");
      root->left->right->right->right->right = new node ("67");
     root->right= new node("66");
     root->right->left= new node ("102");
     root->right->right= new node ("203");
     
     cout<<"Preorder traversal of binary tree = ";
     t.printPreorder(root);

     cout<<"\nInorder traversal of binary tree = ";
     t.printInorder(root);

     cout<<"\nPostorder traversal of binary tree = ";
     t.printPostorder(root);
   return 0;

}

