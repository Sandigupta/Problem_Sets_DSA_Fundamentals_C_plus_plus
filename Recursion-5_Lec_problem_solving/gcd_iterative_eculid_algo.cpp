#include <bits/stdc++.h>
using namespace std;

int gcd(int m, int n)
{
    while (n != 0 and m != 0)
    {
        if (m > n)
        {
            m %= n;
        }
        else
        {
            n %= m;
        }
    }
    return max(m, n);
}
int main()
{
    int m, n;
    cin >> m >> n;

    int result = gcd(m, n);
    cout << result << endl;
}