#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    vector<int> v(26, 0);
    // bool flag = true;
    if (s1.length() != s2.length())
    {
        cout << "Not Anagram" << endl;
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            v[int(s1[i]) - 'a']++;
            v[int(s2[i]) - 'a']--;
        }
        int ans = accumulate(v.begin(), v.end(), ans);
        if (ans)
            cout << "Not Anagram" << endl;
        else
            cout << "Anagram" << endl;
    }
}
// time complexcity=o(length of string )
// space complexcity=o(26)==o(1)