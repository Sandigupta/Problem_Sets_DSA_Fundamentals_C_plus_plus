#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int current = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > current)
        {
           v[j + 1] = v[j];
                j--;
        }
        v[j + 1] = current;
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

    insertion(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
}