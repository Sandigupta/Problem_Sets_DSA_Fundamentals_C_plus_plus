#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &v, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        bool flag = false;
        int j = 0;
        while (j != i)
        {
            if (v[j] == 0 && v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
            j++;
        }
        if (!flag)
        {
            break;
        }
        }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    f(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}