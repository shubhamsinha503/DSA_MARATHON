#include<iostream>
#include<vector>
using namespace std;

void ReverseChar(char *arr,int n){
    int lastindex=0;
    int i=0;
    while(arr[i]!='\0'){
        lastindex++;
        i++;
    }
    int t=lastindex-1;
    int k=0;
    while(k<t){
        swap(arr[k],arr[t]);
        k++;
        t--;
    }
    cout<<arr;
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    ReverseChar(arr,100);
}