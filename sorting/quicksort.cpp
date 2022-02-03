#include<bits/stdc++.h>
using namespace std;
void swap(vector<int>&v,int i,int j)
{
 
  int t=v[i];
  v[i]=v[j];
  v[j]=t;

}
int partitionA(vector<int>&v,int l,int r)
{
  int pivot=v[r];
  int i=l-1;
  int j;
  for(j=l;j<r;j++)
  {
    if(pivot>v[j])
    {
        i++;
       
        if(i!=j) swap(v,i,j);
    }

  }
swap(v,i+1,r);
return i+1;

}

void quicksort(vector<int>&v,int l,int r)
{
    if(l<r)
    {
         int pi=partitionA(v,l,r);
         quicksort(v,l,pi-1);
         quicksort(v,pi+1,r);
    }
}

int main()
{
 vector<int>v={5,7,2,6,9};
 
 int p=0;
 int r=v.size()-1;

quicksort(v,p,r);
for (auto &&i : v)
{
    cout<<i<<" ";
}



}