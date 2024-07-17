#include <iostream>
#include <vector>
using namespace std;

void print_all_pairs(vector<int> &arr){
    int n=arr.size() ;

    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}

int main(){
    vector<int>arr={10,20,30};
    print_all_pairs(arr);
}