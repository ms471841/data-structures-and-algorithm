#include <bits/stdc++.h>
using namespace std;

class myClass
{

public:
    bool print1Seq(int index, int n, vector<int> v, vector<int> &ds)
    {
        if (index == n)
        {
            for (auto i : ds)
                cout << i;
            return true;
        }

        ds.push_back(v[index]);
        if (print1Seq(index, n, v, ds) == true)
            return true;
        ds.pop_back();
        if (print1Seq(index, n, v, ds) == false)
            return false;
    }
};

int main()
{

    vector<int> v{3, 4, 1};
    vector<int>ds;
    myClass myob;
    myob.print1Seq(0,3,v,ds);
}
