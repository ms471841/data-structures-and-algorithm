#include <bits/stdc++.h>
using namespace std;

void find(int index, int n, int target, vector<int> v, vector<int> &ds)
{

    if (index == n)
    {
        if (target == 0)
        {
            for (auto &&i : ds)
            {
                cout << i;
            }
            return;
        }
    }
    ds.push_back(v[index]);
    target -= v[index];
    find(index, n, target, v, ds);
    ds.pop_back();
    target += v[index];
    find(index + 1, n, target, v, ds);
}

int main()
{

    vector<int> v{1, 2, 1, 3}, ds;
    find(0, 4, 2, v, ds);
}
