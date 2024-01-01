// Simple method to find gcd of two numbers.
#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    int result = 1;
    if (n == 1 || m == 1)
    {
        return 1;
    }
    int l = max(n, m);
    for (int i = 2; i * i <= l; i++)
    {
        while (n % i == 0 and m % i == 0)
        {
            result *= i;
            n /= i;
            m /= i;
        }
    }
    return result;
}
int main()
{
    int n, m;
    cin >> n >> m;

    int result = gcd(n, m);
    cout << result << endl;
}