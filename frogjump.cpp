#include<bits/stdc++.h>
using namespace std;
int solution(vector<int>& blocks)
{ int maxdis=0;
   if(blocks.size()==2) return 2;
   for(int i=0;i<blocks.size();i++)
   {
     int left = i, right = i;
      while(left >=0 and blocks[left-1]>= blocks[left]){ left--;}
      while(right < blocks.size() and blocks[right]<=blocks[right+1]){ right++;}
      std::cout <<right<< " " <<left ;
      maxdis = max(maxdis, right - left);
      cout <<" "<<maxdis<<endl;


   }
   return maxdis;
}



int main()
{
    vector<int>v1;
    v1 = {1,1};

    cout << solution(v1);
}