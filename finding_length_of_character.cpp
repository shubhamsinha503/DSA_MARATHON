#include<iostream>
#include<vector>
using namespace std;

int find_length(char *arr){
    int count=0;
    int i=0;
    while(arr[i]!='\0'){        
        count++;
        i++;
    }
    return count++;
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    int result=find_length(arr);
    cout<<result<<endl;
}