#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool TwoSum(vector<int> &arr, int k){
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]+arr[j]==k){
                return true;
            }
        }
    }
    return false;
}

bool EffiecientTwoSum(vector<int> &arr,int k){
    sort(arr.begin(),arr.end());
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]<k){
            i++;
        }
        else if(arr[i]+arr[j]>k){
            j--;
        }
        else{
            return true;
        }
    }
    return false;

}

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    arr.resize(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;
bool result=EffiecientTwoSum(arr,k);
cout<<result<<endl;

}
