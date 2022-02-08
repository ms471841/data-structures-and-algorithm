#include<bits/stdc++.h>
using namespace std;

void subSet(int index,vector<int>v,vector<vector<int>>&res,vector<int>&help )
{
    if(index == v.size())
    {
        res.push_back(help);
        return;
    }
    help.push_back(v[index]);
    subSet(index+1,v,res,help);
    help.pop_back();
    subSet(index+1,v,res,help);
}

int main()
{  
    vector<int>help,v = {3,5,2};
    vector<vector<int>>res;
    subSet(0,v,res,help);
    for(int i =0;i<res.size();i++)
    {
        for(auto it : res[i]) cout<<it<< " ";
        cout<<endl;
    }
    
    return 0;
}