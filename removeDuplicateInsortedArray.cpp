#include<bits/stdc++.h>
using namespace std;

    void removeDuplicate(vector<int>&myVector)
    {   
        int i=0;
        for(int j=1;j<myVector.size();j++)
        {
            if(myVector[i]!=myVector[j]) i++; myVector[i] = myVector[j];
        }
    }
    void printArray(vector<int>myVector)
    {
        for(auto it : myVector)
        {
            cout << it;
        }
    }


int main()
{   
   
    vector<int>arr = {1,1,1,2,2,3,3,6,6};
   
    removeDuplicate(arr);
    printArray(arr);
}