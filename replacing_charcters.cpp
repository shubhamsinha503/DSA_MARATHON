#include<iostream>
#include<vector>
using namespace std;

void Replace(char *arr,int n,char newchar,char prevchar){
    for(int i=0;i<n;i++){
        if(arr[i]== prevchar){
            arr[i]=newchar;
        }
    }
    cout<<arr;
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    Replace(arr,100,' ','@');
}