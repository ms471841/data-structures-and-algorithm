#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&v,int s)
{
  int left=s*2;
  int right=left+1;
  int largest=s;
  if(left<=v.size() && v[left]>v[s])
  {
      largest=left;
  }
 if(right<=v.size() && v[right]>v[largest])
 {
     largest=right;

 }
 if(largest!=s)
 {
     int t=v[largest];
     v[largest]=v[s];
     v[s]=t;
     heapify(v,largest);
 }

}

int main()
{
  
  vector<int>v={-1,10,20,25,6,12,15,4,16};
  for(int i=v.size()/2;i>=1;i--)
  {
      heapify(v,i);
  }
 for (auto &&i : v)
 {
     cout<<i<<" ";
 }
 

}