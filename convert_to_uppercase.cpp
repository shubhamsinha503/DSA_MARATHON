#include<iostream>
#include<vector>
using namespace std;

void UpperToLower(char *arr,int n){
    int i=0;
    while(arr[i]!='\0'){
        char ch=arr[i];
        if(ch>='a' && ch<='z'){
        ch=ch-'a'+'A';
        arr[i]=ch;
        }
        i++;
    }
    cout<<arr;
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    UpperToLower(arr,100);
}