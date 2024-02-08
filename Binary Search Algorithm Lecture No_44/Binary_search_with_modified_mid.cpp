#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &v, int t)
{

    int l = 0;
    int h = v.size() - 1;

    while (l <= h)
    {
        int mid =l+ (h - l) / 2;
        
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

int main()
{
    vector<int> v{1, 9, 13, 15, 18, 22, 35, 40};
    int k;
    cin >> k;

    int idx = BinarySearch(v, k);
    cout << idx << endl;
}