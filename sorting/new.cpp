#include<bits/stdc++.h>
using namespace std;

int fact(int r)
{

 int f=1;
 for (size_t i = 1; i <= r; i++)
 {
     f*=i;
 }
 return f;

}

void solve()
{
  int n=321;
 // cin>>n;
  long long sum=0;
  while (n>0)
  {
      int r=n%10;
      sum+=fact(r);
      n/=10;
      
  }
  
cout<<sum;

}


int main()
{

 solve();

}