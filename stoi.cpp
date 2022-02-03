#include<iostream>
#include<string>
#include<cctype>
using namespace std;

    int myAtoi(string s) {
       string ss="";
       int flag=0;
       for (size_t i = 0; i < s.size(); i++)
       {
           if(isdigit(s[i])){
            ss=ss+s[i];
           }
           if(s[i]=='-'){
                flag=1;
           }
           
       }
      
       if(flag==1){
        int num=stoi(ss);
        num*=-1;
        return num;

       }
           
       
        return stoi(ss);
    }

int main(){


string str="words and 987";

cout<<myAtoi(str)<<endl;




}

