//JOBAYER JOYADDAR
//1731833 

#include<iostream>
using namespace std;

class node
{
public:
string key;
node* left;node* right;

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

   // Driver method 

       int main ()
    {
         
     binarytree t;
   
     node *root = new node("Ali");
     root->left = new node ("Ahmad");
     root->right = new node("Alwi");
     root->right->left = new node ("Che salmi");
     root->right->right = new node ("Dalilah");
     root->right->left->left = new node ("Farid");
     root->right->left->right = new node ("Eliza");
     root->right->right->left = new node ("Ramlee");
     root->right->right->right = new node ("Sharifah");
     root->right->right->left->->left = new node ("Yahya");

     cout<<"Preorder traversal of binary tree is ";
     t.printPreorder(root);

     cout<<"\nInorder traversal of binary tree is ";
     t.printInorder(root);

     cout<<"\nPostorder traversal of binary tree is ";
     t.printPostorder(root);
   return 0;
}



 













