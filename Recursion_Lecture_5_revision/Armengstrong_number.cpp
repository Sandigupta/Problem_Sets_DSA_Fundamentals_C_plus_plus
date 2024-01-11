#include <bits/stdc++.h>
using namespace std;
int is_Armengstrong(int sz,int n)
{
    if (n == 0)
    {
        return 0;
    }
    // int r = n % 10;
    // int pr = 1;
    // for (int i = 0; i < sz; i++)
    // {
    //     pr = pr * r;
    // }

    int result = pow(n%10,sz) + is_Armengstrong( sz,n / 10);
    return result;
}

int main()
{
    int n,sz;
    cin >> n>>sz;

    
    int result = is_Armengstrong(sz,n);
    if (result == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}