#include <bits/stdc++.h>
using namespace std;

int minele(vector<int> &v)
{
    int l = 0;
    int h = v.size() - 1;
    int ans = -1;
    if (v.size() == 1)
        return v[0];
    if (v[l] < v[h])
        return v[l];
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] > v[mid + 1])
            return mid + 1;
        if (v[mid] < v[mid - 1])
            return mid;
        if (v[mid] > v[l])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v{4, 5, 6, 1, 2, 3};

    int idx1 = minele(v);

    cout << idx1 <<" "<<v[idx1]<<endl;
}
