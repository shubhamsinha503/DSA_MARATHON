#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
   string str="aaaabbbcc";
   //int n;
   //cin>>n;
   //getline(cin,str);
   string result;
   int count=1;
   for(int i=1;i<str.length();i++){
    if(str[i-1]==str[i]){
        count++;
    }
    else{
        result+=str[i-1];
        result+=to_string(count);
        count=1;
    }
   }
    result+=str[str.length()-1];
    result+=to_string(count);
   
   for(int i=0;i<result.size();i++){
    cout<<result[i];
   }

}