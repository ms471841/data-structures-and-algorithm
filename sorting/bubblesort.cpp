#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&v,int n)
{
  for(int i=0;i<n;i++)
  {
      for(int j=n-1;j>i;j--)
      {
          if(v[j]<v[j-1])
          {
              int t=v[j];
              v[j]=v[j-1];
              v[j-1]=t;
          }
      }
  }
 

}

int main()
{
      int n=10;
  vector<int>v={4,6,2,19,54,23,12,54,67,1};
  bubbleSort(v,n);
  for (auto &&i : v)
  {
      cout<<i <<" ";
  }
 


}