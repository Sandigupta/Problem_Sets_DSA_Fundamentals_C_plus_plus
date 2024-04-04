#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<int> v(128, 0);
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        v[int(s[i])]++;
    }
    for (int j = 65; j < v.size(); j++)
    {
        while (v[j] > 0)
        {
            // cout << char(j);
            ans.push_back(char(j));
             v[j]--;
        }
       
    }
    cout << ans << endl;
    return 0;
}

// time complexcity=o(length of string)
// space complexcity=o(26)