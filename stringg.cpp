#include<iostream>
#include<string>
using namespace std;

int checkbroken(string str,char c){
int count=0;
int start=0;
string del=" ",st;
int end=str.find(del);

while (end!=-1)
{
    str.substr(start,end-start);
    if(st.find(c,start)!=-1){
        count++;
    }
    start=end+del.size();
    end=str.find(del,start);

}

  str.substr(start,end-start);
  if(st.find(c)!=1){
      count++;
  }

 return count;

}

int main(){

string str="hello manish";
string brk="a";
int wordwork=0;
for (auto &&i : brk)
{
  wordwork+= checkbroken(str,brk[i]); 
}

cout<<wordwork;


}