#include<iostream>
using namespace std;

bool Palindrone(char *arr,int n){
   int i=0;
   int count=0;
   while(arr[i]!='\0'){
    count++;
    i++;
   }
   int t=0;
   int k=count-1;
   while(t<k){
    if(arr[t]!=arr[k]){
        return false;
    }    
    t++;
    k--;
   }
   return true;
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    cout<<Palindrone(arr,100);
}