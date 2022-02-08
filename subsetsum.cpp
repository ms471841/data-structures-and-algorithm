#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> v,int index, vector<int>& res,int sum)
{
    
        if(index == v.size())
        {
            res.push_back(sum);
            return;
        }
    
    sum += v[index];
    subsetSum(v,index+1,res,sum);
    sum -= v[index];
    subsetSum(v,index+1,res,sum);
}

int main()
{
    vector<int> res, v = {2, 4, 5};
    int sum = 0;
    subsetSum(v, 0, res,sum);
    for (auto it : res)
        std::cout << it<<" ";
    std::cout << endl;
}