#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &v, int cntzero)
{
    int n = v.size();

    for (int i = 0; i < cntzero; i++)
    {
       
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] == 0 && v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
                
            }
        }
        
    }
}
int main()
{
    int n;
    cin >> n;

    int cntzero = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            cntzero++;
    }
    f(v, cntzero);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}