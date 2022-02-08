#include<bits/stdc++.h>
using namespace std;
int countMaxOne(vector<int>arr)
{
    int i = 0,maxone = 0;
    while(i<arr.size())
    {
        if (arr[i]== 1)
        {   int j=i+1;
            while (arr[j]==1)
            {
                j++;
            }
            maxone = max(maxone, j-i);
            i= j;
        }else{
            i++;
        }
    }
    return maxone;
}
int main()
{
    vector<int>arr = {0,1,0,0};
    cout<<countMaxOne(arr);
}