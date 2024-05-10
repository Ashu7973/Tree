#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        this->data=value;
        left=NULL;
        right=NULL;
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
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    return root->data+sum(root->left)+sum(root->right);
}
int main(){
    Node *temp1=Binary();
    int s=sum(temp1);
    cout<<"The sum of the tree is"<<s;
}