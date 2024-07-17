#include<iostream>
#include<vector>
using namespace std;

vector<int> Duplicates(vector<int> &nums ){
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
    return result;

}

vector<int> DuplicatesIndexApproch(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        int index=nums[i]-1;
        if(nums[i]!=nums[index]){
            swap(nums[i],nums[index]);
        }
    }
    vector<int> result;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=(i+1)){
            result.push_back(i+1);
        }
    }
    return result;
}

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result=DuplicatesIndexApproch(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}