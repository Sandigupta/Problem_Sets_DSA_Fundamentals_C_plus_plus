#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 0;

    cout << (n % 2 + 10 * f(n / 2));
    return 0;
}

int main()
{
    int n;
    cin >> n;
    f(n);
}