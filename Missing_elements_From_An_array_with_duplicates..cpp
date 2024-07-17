#include<iostream>
#include<vector>
using namespace std;

int Duplicates(vector<int> &nums ){
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i])-1;
        if(nums[index]>0){
            nums[index]*=-1;
        }
    }
    vector<int>result;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            result.push_back(i+1);
        }
    }

}

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=Duplicates(arr);
    cout<<result<<endl;
}