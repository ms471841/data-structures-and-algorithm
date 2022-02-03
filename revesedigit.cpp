#include<iostream>
using namespace std;

int reverseNum(int num)
{   
    int revNumber=0;
    while (num>0)
    {
        int r=num%10;
        revNumber=revNumber*10+r;
        num/=10;
    }
    return revNumber;
}


int main()
{
  cout<<reverseNum(2345);

}