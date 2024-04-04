#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    // int min = ;
    string ans = "";
    int n = str.length();
    int idx = -1;
    for (int i = 0; i < n ; i++)
    {
        int current = int(str[i]);
        for (int j = i+1; j < n; j++)
        {
            if (current > int(str[j]))
            {
                current = int(str[j]);
                idx = j;
            }
        }
        swap(str[i], str[idx]);
    }
    cout << str << endl;
}
