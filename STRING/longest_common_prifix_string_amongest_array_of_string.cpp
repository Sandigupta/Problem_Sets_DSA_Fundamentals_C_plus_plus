#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int commonLen = INT_MAX; // Initialize to maximum possible value

    for (int i = 0; i < n - 1; i++) // Stop at n - 1
    {
        int current = 0;
        string s = v[i];
        for (int j = 0; j < min(v[i].length(), v[i + 1].length()); j++) // Use minimum length
        {
            if (s[j] == v[i + 1][j])
            {
                current++;
            }
            else
            {
                break; // Stop when characters don't match
            }
        }
        commonLen = min(commonLen, current);
    }
    for (int i = 0; i < commonLen; i++)
    {   
        cout << v[0][i];
    }
    return 0;
}

// time complexcity will be of order of O(n-1 * m)==O(m*n), m=general length odf string.n=number of string;