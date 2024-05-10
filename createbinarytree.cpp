#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>f;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        this->data=value;
        left=right=NULL;
    }
};
Node* Binary(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp=new Node(x);
    temp->left=Binary();
    temp->right=Binary();
    return temp;
}
int preorder(Node *root,int x){
    
    if(root==NULL){
        return;
    }

    if(root->data==x){
        return 1
    }
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
 void inorder(Node *root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
 }
 
int main(){
    Node *temp1=Binary();
    //preorder(temp1);
    //inorder(temp1);
    //postorder(temp1);
    int n;
    cout<<"enter the number that have to find"<<endl;
    cin>>n;
    int y=preorder(temp1,n);
  
    if(y==1){
        cout<<"Element is found in the tree";
    }else{
        cout<<"Element is not found";
    }
    
}