#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&v,int m)
{
  
  for(int i=0;i<m;i++)
  { 
      int small=i;
    for(int j=i+1;j<m;j++)
    {
        if(v[small]>v[j])
        {
            small=j;
        }
    }
    int t=v[small];
    v[small]=v[i];
    v[i]=t;

  }

}

int main()
{
  int n=10;
  vector<int>v={4,6,2,19,54,23,12,54,67,1};
  selectionSort(v,n);
  for (auto &&i : v)
  {
      cout<<i <<" ";
  }
  



}

