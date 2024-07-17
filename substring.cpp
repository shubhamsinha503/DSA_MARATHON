#include<iostream>
#include<vector>
using namespace std;

vector<string> PrintSubstr(string s){
    vector<string> result;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            result.push_back(s.substr(i,j-i+1));
        }
    }
    return result;
}

int main(){
    string s="aba";
   vector<string> result=PrintSubstr(s);
   for(int i=0;i<result.size();i++){
    cout<<result[i]<<endl;
   }
}