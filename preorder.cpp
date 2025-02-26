#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    public:
    Node(int data1){
        data=data1;
        left=nullptr;
        right=nullptr;
    }
};

void Inorder(Node*root){
    if(root==nullptr)return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(Node*root){
    if(root==nullptr)return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node*root){
    if(root==nullptr)return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}


int main(){
    Node *root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);

    root->right->left=new Node(6);
    root->right->right=new Node(7);

Inorder(root);
cout<<"\n";
Preorder(root);
cout<<"\n";
Postorder(root);

}