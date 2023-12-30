#include <bits/stdc++.h>
using namespace std;

void printPattern(int n, int current)
{
    if (current < 0)
    {
        cout << current << ", ";
        return;
    }

    cout << current << ", ";
    printPattern(n, current - 5);
    if (current <= n)
    {
        cout << current << ", ";
    }
}

int main()
{
    // int n;
    // cin >> n;
    printPattern(16, 16);
}