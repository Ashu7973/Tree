#include<iostream>
using namespace std;
char Tree[15];
void root(char key){
     if(Tree[0]!='\0'){
        cout<<"Tree has root"<<endl;
     }else{
        Tree[0]=key;
     }
}
void leftChild(char key,int level){
    if(Tree[level]=='\0'){
        cout<<"Cant set child because of no parent"<<endl;
    }else{
        Tree[level*2+1]=key;
    }
}
void rightChild(char key,int level){
    if(Tree[level]=='\0'){
        cout<<"Cant set child because of no parent"<<endl;
    }else{
        Tree[level*2+2]=key;
    }
}
void printTree(int n){
    for(int i=0;i<n;i++){
        cout<<" "<<Tree[i]<<" ";
    }
}
int main(){
     root('A');
     leftChild('B',0);
     rightChild('C',0);
    //  leftChild('D',1);
     rightChild('E',1);
     printTree(6);
}