#include<iostream>
#include<vector>
using namespace std;

void RotateArray(vector<int> &arr,int k){
    int n=arr.size();
    int shift=k%n;
    int temp[1000];
    int index=0;
    //storing the last element;
    for(int i=n-shift;i<n;i++){
        temp[index]=arr[i];
        index++;
    }
    //shifting the remaing element;
    for(int i=n-shift-1;i>=0;i++){
        arr[shift+i]=arr[i];
    }
    //inserting last elements;
    for(int i=0;i<shift;i++){
        arr[i]=temp[i];
    }

}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int k;
    cin>>k;
    RotateArray(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}