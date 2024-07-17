#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* CreateLL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=0;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
}
}

bool Palindrone(Node*head){
    vector<int>arr;
    Node*temp=head;
    while(temp){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    vector<int> arr;
    int val=0;
    while(true){
        cin>>val;
        arr.push_back(val);
        if(val!=-1){
        break;
        }
    }
    Node*head=CreateLL(arr);

    cout<<Palindrone(head)<<endl;

}