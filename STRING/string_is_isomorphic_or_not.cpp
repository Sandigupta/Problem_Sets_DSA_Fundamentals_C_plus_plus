#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    vector<int> v1(26, -1);
    vector<int> v2(26, -1);

    if (s1.length() != s2.length())
    {
        cout << "Not a isomorphic" << endl;
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            v1[int(s1[i]) - 'a'] = i;
            v2[int(s2[i]) - 'a'] = i;
        }
    }

    for (int i = 0; i <s1.length(); i++)
    {
        if(v1[int(s1[i]) - 'a']!= v2[int(s2[i]) - 'a']){
            cout << "Not a isomorphic" << endl;
            break;
        }else{
            cout << "isomorphic" << endl;
            break;
        }
    }
    
}
// time complexcity = o(length of string )
// space complexcity =o(26)==o(1)