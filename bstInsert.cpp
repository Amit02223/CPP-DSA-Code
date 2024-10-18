#include<iostream>
using namespace std;
 
class Node
{
    public:
    int data ;
    Node * left , *right;

    Node(int value){
        data = value ;
        left = right = NULL;
    }
};

Node * insert(Node *root ,int target)
{
    //base case
    if(!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if(target<root->data)
        root->left = insert(root->left, target);
        else 
        root->right= insert(root->right, target);

        return root;
}

//   void preOrder(Node *root)
//   {
//     if(!root)
//     return ;
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
//   }
  void inOreder(Node *root)
  {
    if(!root)
    return;

    inOreder(root->left);
    cout<<root->data<<" ";
    inOreder(root->right);
  }
  
//  bool search(Node *root ,int target)
//  {
//     if(!root)
//     return 0;

//     if(root->data==target)
//     return 1;
//     if(root->data>target)
//     search(root->left , target);
//     else
//     search(root->right , target);
//  }
int main()
{
    int arr[] = {4,54,7,35,2,45,6,65,8,42};
    Node *root = NULL;
    for (int i = 0; i < 10; i++){
       root = insert(root , arr[i]);
    }
   inOreder(root); 
//    cout<<endl;
//    preOrder(root);
//    cout<<search(root , 5);

}