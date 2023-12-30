#include <bits/stdc++.h>
using namespace std;

int sum(int n, int m)
{

    if (m == 1)
    {
        int s = (n * (n + 1) / 2);
        return s;
    }
    // else{
    return sum(sum(n, m - 1), 1);
    // }
}

int main()
{
    int n = 3;
   
   int  m=2;
    // cin >> n >> m;
    int result = sum(n, m);
    cout << result << endl;
}