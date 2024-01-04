#include <bits/stdc++.h>
using namespace std;

bool f(int *arr, int idx, int x, int n)
{
    if (idx == n)
    {
        return false;
    }
    else
    {
        if (arr[idx] == x)
        {
            return true;
        }
    }
    return f(arr, idx + 1, x, n);
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int idx = 0;
    bool result = f(arr, idx, x, n);
    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}