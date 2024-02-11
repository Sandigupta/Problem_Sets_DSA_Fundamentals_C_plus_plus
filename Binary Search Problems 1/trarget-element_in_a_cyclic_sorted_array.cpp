#include <bits/stdc++.h>
using namespace std;
int righthalf(vector<int> &v, int l, int h, int t)
{

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] == t)
        {
            return mid;
        }
        else if (v[mid] < t)
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
int lefthalf(vector<int> &v, int l, int h, int t)
{

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] == t)
        {
            return mid;
        }
        else if (v[mid] < t)
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
int minele(vector<int> &v)
{
    int l = 0;
    int h = v.size() - 1;
    if (v[l] < v[h])
        return l;
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
    int target;
    cin >> target;
    int idx = minele(v);
    int l = 0;
    int h = v.size() - 1;
    int ele1 = lefthalf(v, l, idx - 1, target);
    int ele2 = righthalf(v, idx + 1, h, target);

    cout << max(ele1, ele2) << endl;
}


// Time comlexcity of order of o(log n) 
// Space complexcity of o(1)