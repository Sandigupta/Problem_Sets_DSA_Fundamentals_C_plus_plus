#include <bits/stdc++.h>
using namespace std;

void f(string &s1, string &s2, string &result, int i)
{
    if (i == max(s1.length(), s1.length()))
    {
        return;
    }
    if (i < s1.length())
    {
        result += s1[i];
    }
    if (i < s2.length())
    {
        result += s2[i];
    }
    f(s1, s2, result, i + 1);
    return;
}

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    string result = "";
    int idx = 0;
    f(s1, s2, result, idx);
    cout << result << endl;
}