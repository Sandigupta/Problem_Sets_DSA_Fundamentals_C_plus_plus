#include <bits/stdc++.h>
using namespace std;

int f2(vector<int> &v, int m)
{
    int l = 0;
    int h = v.size() - 1;
    int idx2 = -1;
    
    while (l <= h)
    {   
        int mid = l + (h - l) / 2;
        if (v[mid] < m)
        {
            m = v[mid];
            idx2 = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return idx2;
}

int f1(vector<int> &v, int m)
{
    int l = 0;
    int h = v.size() - 1;
    int idx1 = -1;
   
    while (l <= h)
    {   
         int mid = l + (h - l) / 2;
        if (v[mid] < m)
        {
            m = v[mid];
            idx1 = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return idx1;
}

int main()
{
    vector<int> v{ 5, 1, 2,3,4};

    int min1 = INT_MAX;
    min1 = f1(v, min1);
    int min2 = INT_MAX;
    min2 = f2(v, min2);

    cout << min(v[min1], v[min2]);
}