#include <bits/stdc++.h>
using namespace std;

void f(string &s, int i, string result, vector<string> &li, vector<string> &key)
{
    if (i == s.length())
    {
        li.push_back(result);
        return;
    }

    int digit = s[i] - '0';
    
    if(digit<=1){
        f(s, i = 1, result, li, key);
        return;
    }

    for(int j = 0; j < key[digit].size(); j++)
    {
         f(s, i + 1, result + key[digit][j], li, key);
    }
    return;
}




int main()
{
    string s;
    cin >> s;

    string result = " ";
    vector<string> li;

    vector<string> key(10);
    key={" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    f(s, 0, result, li, key);
    for (int i = 0; i < li.size(); i++)
    {
        cout << li[i] << " ";
    }
    cout << endl;
}