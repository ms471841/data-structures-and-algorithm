#include<bits/stdc++.h>
using namespace std;


void merge( vector<int>&v,int l,int mid,int r)
{
   int n1=mid-l+1;
   int n2=r-mid;
  int a[n1];
  int b[n2];

   for(int i=0;i<n1;i++)
   {
       a[i]=v[i+l];
   }
    for(int j=0;j<n2;j++)
   {
       b[j]=v[mid+1+j];
   }
  int i=0,j=0,k=l;
   while (i < n1 && j < n2)
   {
       if(a[i] <= b[j])
       {
           v[k]=a[i];
           i++;
       }else{
           v[k]=b[j];
           j++;
       }
       k++;
   }
  while (i < n1)
  {
      v[k]=a[i];
      i++;k++;
  }
  while (j < n2)
  {
      v[k]=b[j];
      k++;j++;
  }
}
void mergesort( vector<int>&v,int l,int r)
{
  if(l<r)
  {      
    int mid=(l+r)/2;
    mergesort(v,l,mid);
    mergesort(v,mid+1,r);
    merge(v,l,mid,r);

  }
  


}
int main()
{
     vector<int>v={3,2,5,7,2,8,10,1};
    int l=0;
    //int r=sizeof(v)/sizeof(v[0]);
     int r=v.size()-1;
    mergesort(v,l,r-1);

    for (int i=0;i<r;i++)
    {
        cout<<v[i]<<" ";
    }
    
    

    
 }