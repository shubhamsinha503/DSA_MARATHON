#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

 string decodeMessage(string key,string message) {
        unordered_map<char,char>mpp;
        char space=' ';
        mpp[space]=space;
        int index=0;
        char ch='a';

        while(ch<='z' && index<key.length()){
            char current=key[index];
            //already present in map
            if(mpp.find(current)!=mpp.end()){
                index++;
            }
            else{
                mpp[current]=ch;
                ch++;
                index++;
            }
        }
        string str="";
        for(int i=0;i<message.length();i++){
            char t=message[i];
            char mapped=mpp[t];
            str.push_back(mapped);
        }
return str;
    }

    int main(){
        string str="the quick brown fox jumps over the lazy dog";
        string message="vkbs bs t suepuv";
        string str1=decodeMessage(str,message);
        cout<<str1;
    }

