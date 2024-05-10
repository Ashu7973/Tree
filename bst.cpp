
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
Node *insert(Node *root,int x){
    if(!root){
        Node *temp=new Node(x);
        return temp;
    }
    if(x<root->data){
        root->left=insert(root->left,x);
    }else{
        root->right=insert(root->right,x);
    }
    return root;
}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
 }
 void preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
 }
 void postorder(Node *root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
 }
 
int main(){
    int arr[]={3,7,4,1,6};
    Node *root=NULL;
    for(int i=0;i<5;i++){
        root=insert(root,arr[i]);
    }
    
    inorder(root);
}