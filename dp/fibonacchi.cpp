#include<iostream>
using namespace std;
int ar[100]={0};
int fibonacchi(int n){
if(n==0 || n==1) return n;
if(ar[n]!=0) return ar[n];
return fibonacchi(n-1)+fibonacchi(n-2);

}

int main(){
    int n=7;
    int i=0;
    while (i<n)
    {
    cout<<fibonacchi(i)<<" "; 
        i++;
    }
    cout<<endl<<fibonacchi(n);
    

}