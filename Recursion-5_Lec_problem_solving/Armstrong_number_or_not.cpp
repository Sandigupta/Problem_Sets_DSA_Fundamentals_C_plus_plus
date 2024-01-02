#include <bits/stdc++.h>
using namespace std;

int pow_rec(int n, int l)
{

    if (l == 0)
        return 1;

    if (l % 2 == 0)
    {
        int result = pow_rec(n, l / 2);
        return result * result;
    }
    else
    {
        int result = pow_rec(n, (l - 1) / 2);
        return n * result * result;
    }
}
int f(int n, int l)
{
    if (n == 0)
        return 0;

    return pow_rec(n % 10, l) + f(n / 10, l);
}

int main()
{
    int n;
    cin >> n;

    int l = 0;
    for (; n != 0; n /= 10, l++)
        ;

    int result = 0;
    result = f(n, l);
    if (result == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}