#include<bits/stdc++.h>
using namespace std;
int solution(vector<int>& A,vector<int>&B)
{
    long long sum1=0, sum2=0,count=0;
   for(int i=0 ;i< A.size();i++)
   {
       sum1 +A[i];
       sum2 +=B[i];
       
       if(sum1 == sum2 and i!=A.size()-1)
       {   long long sum3=0,sum4=0;
           for(int j= i+1 ;j<A.size();j++)
           {
               sum3+=A[j];
               sum4+=B[j];
           }
           
           if(sum1 == sum3 and sum3 == sum4)
           {
               count++;
              
           }
       }
     
   }
return count;

}



int main()
{
    vector<int>v1,v2;
    v1 = {3,2,6};
    v2 = {4,1,6} ;
    cout << solution(v1,v2);
}