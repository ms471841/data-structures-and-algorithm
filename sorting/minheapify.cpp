#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&v,int s)
{
    int left=2*s;
    int right=left+1;
    int smallest=s;
    if(left<=v.size()&& v[left]<v[s])
    {
        smallest=left;
    }
    if(right<=v.size() && v[right]<smallest)
    {
        smallest=right;
    }
    if(smallest!=s)
    {
        int t=v[smallest];
        v[smallest]=v[s];
        v[s]=t;
        heapify(v,smallest);
    }
}
int main()
{
  vector<int>v={0,25,20,15,16,12,16,4,6};
  for(int i=v.size()/2;i>=1;i-- )
  {
      heapify(v,i);
  }
  for (auto &&i : v)
  {
      cout<<i<<" ";
  }
  

}