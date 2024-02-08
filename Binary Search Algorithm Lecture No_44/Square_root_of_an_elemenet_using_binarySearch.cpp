#include <bits/stdc++.h>
using namespace std;

int SquareRoot(int k)
{
    int l = 1;
    int h = k;
    int ans = 0;
    while (l <= h)
    {
        int mid =l+ (h - l) / 2;
        if (mid * mid <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int k;
    cin >> k;

    int sqr = SquareRoot(k);
    cout << sqr << endl;
}