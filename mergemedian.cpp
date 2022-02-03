



#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // initializing 1st container
    vector<int> arr1 = { 1,2 };
  
    // initializing 2nd container
    vector<int> arr2 = {3,4};
  
    // declaring resultant container
    vector<int> arr3(4);
  
    // sorting initial containers
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
  
    // using merge() to merge the initial containers
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
     
   cout<<arr3.size()<<endl;
   cout<<arr3[arr3.size()/2-1]<<endl;
   cout<<arr3[0]<<endl;
   int n= arr3.size();
   //cout<<arr3[arr3.size()/2];
   cout<<double(arr3[n/2]+arr3[n/2-1])/2;

}
