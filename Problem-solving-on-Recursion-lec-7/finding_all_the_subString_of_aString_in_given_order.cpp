#include <bits/stdtr1c++.h>
using namespace std;

void f(string &s, int i, string result, vector<string> &li)
{
    if (i == s.length())
    {
        li.push_back(result);
        return;
    }
    f(s, i + 1, result + s[i], li);
    f(s, i + 1, result, li);
}

int main()
{
    string s = "abc";

    // string result = "";
    vector<string> li;
    f(s, 0, " ", li);
    for (int i = 0; i < li.size(); i++)
    {
        cout << li[i] << " ";
    }
}