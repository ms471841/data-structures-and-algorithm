#include <bits/stdc++.h>
using namespace std;

void  find(int index,vector<int>&v,int n,vector<int>&ds)
{
if(index == n)
{
    for(auto i : ds) cout << i;
    if(ds.size() == 0) cout << "{}";
    cout << endl;
    return;

}

ds.push_back(v[index]);
find(index+1,v,n,ds);
ds.pop_back();
find(index+1,v,n,ds);



}

int main()
{
   vector<int>v { 1,2,1};
   vector<int>ds;
   find(0,v,3,ds);
}